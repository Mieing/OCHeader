@class AWESearchAIGCIntegrationDataModel, NSString, NSArray, AWESearchAIGCChunkModel, NSDictionary, NSMutableArray;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchAIGCQARoundInfo : NSObject <AWESearchAIGCQARoundInfoProtocol>

@property (retain, nonatomic) NSMutableArray *answers;
@property (retain, nonatomic) NSMutableArray *extras;
@property (retain, nonatomic) NSMutableArray *subUniqueIDs;
@property (readonly, copy, nonatomic) NSString *searchUniqueID;
@property (readonly, copy, nonatomic) NSArray *subSearchUniqueIDs;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *searchID;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> queryNode;
@property (readonly, copy, nonatomic) NSArray *answerNodes;
@property (readonly, copy, nonatomic) NSArray *extraNodes;
@property (nonatomic) BOOL isHistory;
@property (nonatomic) BOOL isRealTime;
@property (nonatomic) BOOL isKeepAlive;
@property (nonatomic) BOOL isReceiveAllData;
@property (nonatomic) BOOL isCancel;
@property (copy, nonatomic) NSArray *blockedCmdArray;
@property (retain, nonatomic) AWESearchAIGCChunkModel *chunkModel;
@property (weak, nonatomic) id<CachalotRenderPipelineComponentViewModel> topOneNode;
@property (nonatomic) unsigned long long answerType;
@property (nonatomic) BOOL needSecuritySplitCard;
@property (nonatomic) long long searchLoadmoreCount;
@property (copy, nonatomic) NSDictionary *searchDetailParams;
@property (nonatomic) BOOL isPrepareToRemove;
@property (retain, nonatomic) AWESearchAIGCIntegrationDataModel *integrationDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubSearchUniqueID:(id)a0;
- (void)addAnswerNodes:(id)a0 conversationID:(id)a1 searchID:(id)a2;
- (void)removeAnswerNode:(id)a0;
- (void)updateAIGCIntegrationDataModel:(id)a0;
- (BOOL)hasSubSearchUniqueID:(id)a0;
- (id)initWithQueryNode:(id)a0 searchUniqueID:(id)a1;
- (void)cleanAnswerNodes;
- (void)addExtraNodes:(id)a0;
- (void)removeExtraNode:(id)a0;
- (void)cleanExtraNodes;
- (void).cxx_destruct;

@end
