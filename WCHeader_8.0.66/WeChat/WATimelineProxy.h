@class NSString;
@protocol IWATimelineCommitDelegate;

@interface WATimelineProxy : NSObject <WCCommitViewResultDelegate, IWATimelineService>

@property (weak, nonatomic) id<IWATimelineCommitDelegate> commitDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getTimelineVCByData:(id)a0;
- (id)getTimelineVCByDataForPhoto:(id)a0;
- (id)weAppData2WCUploadTask:(id)a0;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void).cxx_destruct;

@end
