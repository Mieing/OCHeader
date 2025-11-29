@class UIImageView;

@interface MMFinderLiveMinimizeAudioMicUserHeadImageAttachWidgetObj : MMFinderLiveMinimizeConnectMicUserAttachWidgetObj

@property (retain, nonatomic) UIImageView *contentImageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedFrame;
@property (readonly, nonatomic) unsigned long long currentUIType;

- (void)refresh;
- (BOOL)checkRootViewIsValid;
- (void)layoutUI;
- (void)createContentImageView;
- (id)getSnapshotUserInfoImage;
- (struct CGSize { double x0; double x1; })sizeForContentViewWithNormalizedContainerSize:(struct CGSize { double x0; double x1; })a0;
- (double)topForContentViewWithNormalizedContainerSize:(struct CGSize { double x0; double x1; })a0;
- (double)leftForContentViewWithNormalizedContainerSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)currentViewType;
- (id)contentView;
- (void).cxx_destruct;

@end
