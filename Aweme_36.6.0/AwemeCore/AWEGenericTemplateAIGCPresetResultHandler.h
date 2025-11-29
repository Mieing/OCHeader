@class AWEGenericTemplateAIGCMergedRequestInfo, NSMutableDictionary, NSString, NSArray, NSDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWEGenericTemplateAIGCPresetResultHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *blockDict;
@property (retain, nonatomic) NSMutableDictionary *innerPresetRequestInfoDict;
@property (retain, nonatomic) NSMutableArray *innerAIGCResourceModelList;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *rwQueue;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *toastMsg;
@property (retain, nonatomic) NSArray *preparedRequestInfoList;
@property (readonly, nonatomic) NSDictionary *currentRequestInfoDict;
@property (readonly, nonatomic) NSArray *currentAIGCResourceModelList;
@property (retain, nonatomic) AWEGenericTemplateAIGCMergedRequestInfo *mergedRequestInfo;

- (id)initWithTemplateId:(id)a0 rwQueue:(id)a1;
- (void)appendBlockForRequestId:(id)a0 block:(id)a1;
- (void)appendRequestInfo:(id)a0 withRequestID:(id)a1 templateContextInfo:(id)a2;
- (BOOL)isAllRequestInfoReceived;
- (void)sortResourceModelWithSlotIDList:(id)a0;
- (void)cleanMergeRequestInfo;
- (id)retrieveBlockForRequestId:(id)a0;
- (void)removeBlockForRequestId:(id)a0;
- (void).cxx_destruct;

@end
