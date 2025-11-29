@class MLModel, NSString, NSArray, NSHashTable, NSMutableDictionary, NSDictionary, NSObject, NSMutableArray, IESLiveTextClassifyMonitor;
@protocol OS_dispatch_queue, IESLiveClientAIService;

@interface IESLiveTextClassifyManager : NSObject <IESLiveTextClassifyService>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *textProcessQueue;
@property (copy, nonatomic) NSString *modelPath;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *modelType;
@property (copy, nonatomic) NSString *unzipModelPath;
@property (nonatomic) BOOL isTextClassifyModelReady;
@property (retain, nonatomic) MLModel *textClassifyModel;
@property (copy, nonatomic) NSString *textClass;
@property (copy, nonatomic) NSDictionary *textClassProbabilities;
@property (nonatomic) BOOL giftClassifyByPython;
@property (retain, nonatomic) NSMutableArray *textModelArray;
@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (retain, nonatomic) NSArray *giftList;
@property (retain, nonatomic) NSDictionary *giftNicknameToNameMap;
@property (retain, nonatomic) NSMutableDictionary *giftNameToIdMap;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) IESLiveTextClassifyMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)userService;
- (void)setupTextClassifyModel;
- (void)registerGiftList:(id)a0;
- (void)classifyText:(id)a0;
- (void)sentimentAnalysis:(id)a0;
- (void)identifyingAnalysis:(id)a0;
- (void)addTextModelWithText:(id)a0 textClass:(id)a1;
- (id)getTextModelArray;
- (id)currentAudienceVCRoomModel;
- (void)findGiftId:(id)a0;
- (void)unZipModel:(id)a0 destination:(id)a1;
- (void)deleteDirectoryAndContentsAtPath:(id)a0;
- (void)compileModel;
- (void)classifyTextWithBert:(id)a0;
- (void)notifyDelegateWithText:(id)a0 textClass:(id)a1;
- (id)generateCallbackInstanceWithText:(id)a0 textClass:(id)a1;
- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterDelegate:(id)a0;

@end
