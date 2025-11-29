@class NSString;

@interface AWELiveAvailableService : HTSService <AWELiveAvailableService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canEnterLiveRoom:(id)a0;
- (BOOL)isLiving;
- (BOOL)isAudienceDuringLive;
- (id)getFeedLiveMarkViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)liveCurrencyName;
- (BOOL)isInteractLinkingMicSmallWindowShowingWithErrorToast:(id)a0;
- (BOOL)isInteractLinkingMicSmallWindowWaitingWithErrorToast:(id)a0;
- (BOOL)isLiveAvailable;
- (id)livePreviewCellReuseIdentifier;
- (id)liveDetailCellReuseIdentifier;
- (id)livePreviewCellClassName;
- (id)liveDetailCellClassName;
- (id)livePreviewCellReuseIdentifierAndCellClassNamePair;
- (id)liveDetailCellReuseIdentifierAndCellClassNamePair;
- (void)registerLiveCellForTableView:(id)a0;
- (id)getLiveDetailTableViewCellWithReuseIdentifier:(id)a0 bottomOffset:(double)a1 showLandscape:(BOOL)a2;
- (id)liveEntry;

@end
