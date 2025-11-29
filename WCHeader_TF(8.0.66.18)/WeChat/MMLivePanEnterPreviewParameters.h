@class WCFinderFeedLiveCellRouterModel, MMLiveCDNPlayerView, WCFinderFeedContentVM, MMLivePanEnterPreviewRenderSource;
@protocol MMLiveMorphDismissTarget;

@interface MMLivePanEnterPreviewParameters : NSObject

@property (retain, nonatomic) WCFinderFeedContentVM *contentVm;
@property (retain, nonatomic) MMLiveCDNPlayerView *playerView;
@property (retain, nonatomic) id<MMLiveMorphDismissTarget> morphDismissTarget;
@property (nonatomic) int entryCommentScene;
@property (retain, nonatomic) WCFinderFeedLiveCellRouterModel *routeModel;
@property (retain, nonatomic) MMLivePanEnterPreviewRenderSource *renderSource;

- (void).cxx_destruct;

@end
