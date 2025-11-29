@class StatusFooterJumpLivePlayerByExportId, MMFinderLiveSharePlayerView, WCFinderLiveShareItem, MMFinderLiveStatusIconShareView;

@interface TextState3rdPartyLiveExportHandler : TextState3rdPartyBaseHandler

@property (retain, nonatomic) StatusFooterJumpLivePlayerByExportId *liveInfo;
@property (retain, nonatomic) WCFinderLiveShareItem *liveShareItem;
@property (retain, nonatomic) MMFinderLiveStatusIconShareView *liveStatusView;
@property (retain, nonatomic) MMFinderLiveSharePlayerView *livePlayerView;

- (id)initWithBuffer:(id)a0 keyBuffer:(id)a1;
- (void)requestLiveShareItemWithEncryptedId:(id)a0 nonceId:(id)a1;
- (unsigned int)type;
- (id)title;
- (BOOL)preferCustomView;
- (id)customView;
- (id)name;
- (BOOL)useCoverForContent;
- (BOOL)doSourceActionWithViewController:(id)a0 scene:(unsigned int)a1;
- (BOOL)doHeadImageActionWithViewController:(id)a0;
- (BOOL)supportCustomMedia;
- (id)mediaContentView;
- (BOOL)supportCustomCover;
- (BOOL)allowReferBackground;
- (id)mediaDescription;
- (BOOL)autoHandleAppLifeCycleEvent;
- (id)reportActivityId;
- (void).cxx_destruct;

@end
