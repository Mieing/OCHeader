@class WCFinderFeedImageCDNView, MMImageView;

@interface WAMainFrameTaskBarSectionVideoViewCell : WAMainFrameTaskBarSectionOtherViewCell {
    MMImageView *_playIcon;
    WCFinderFeedImageCDNView *_finderCoverView;
}

- (void)initView;
- (void)layoutSubviews;
- (id)defaultImage;
- (void)updateWithListInfo:(id)a0;
- (BOOL)supportAddToMinimize;
- (void).cxx_destruct;

@end
