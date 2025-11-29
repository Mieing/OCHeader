@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEGenericTemplatePreprocessHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *blockDict;
@property (retain, nonatomic) NSMutableDictionary *taskDict;
@property (retain, nonatomic) NSMutableDictionary *trackModelDict;
@property (retain, nonatomic) NSMutableDictionary *phAssetDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rwQueue;

- (void)appendBlockForRequestId:(id)a0 block:(id)a1;
- (id)retrieveBlockForRequestId:(id)a0;
- (void)removeBlockForRequestId:(id)a0;
- (id)initWithRwQueue:(id)a0;
- (void)appendTaskForRequestId:(id)a0 task:(id)a1;
- (id)retrieveTaskForRequestId:(id)a0;
- (void)removeTaskForRequestId:(id)a0;
- (void)appendTrackModelForRequestId:(id)a0 trackModel:(id)a1;
- (id)retrieveTrackModelForRequestId:(id)a0;
- (void)removeTrackModelForRequestId:(id)a0;
- (void)appendAssetForLocalIdentifier:(id)a0 phasset:(id)a1;
- (id)retrieveAssetForLocalIdentifier:(id)a0;
- (void).cxx_destruct;

@end
