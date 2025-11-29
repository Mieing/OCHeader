@class WCFinderProfileCoverUploadTask;
@protocol WCFinderProfileCoverUploadCdnMgrDelegate;

@interface WCFinderProfileCoverUploadCdnMgr : NSObject <ICdnComMgrExt>

@property (retain, nonatomic) WCFinderProfileCoverUploadTask *currentTask;
@property (weak, nonatomic) id<WCFinderProfileCoverUploadCdnMgrDelegate> delegate;

- (id)init;
- (void)startUploadFinderWithDataItem:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void).cxx_destruct;

@end
