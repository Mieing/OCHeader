@class UILabel;

@interface MMFinderLiveMinimizeAudioMicUserNickAttachWidgetObj : MMFinderLiveMinimizeConnectMicUserAttachWidgetObj

@property (weak, nonatomic) UILabel *rootNickLabel;
@property (retain, nonatomic) UILabel *nickLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedFrame;
@property (readonly, nonatomic) unsigned long long currentUIType;

- (void)refresh;
- (BOOL)checkRootViewIsValid;
- (void)createNickLabel;
- (void)layoutUI;
- (id)getFontForNickLabel;
- (double)maxWidthForNickLabelWithNormalizedContainerSize:(struct CGSize { double x0; double x1; })a0;
- (double)topForNickLabelWithNormalizedContainerSize:(struct CGSize { double x0; double x1; })a0;
- (double)leftForNickLabelWithNormalizedContainerSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)currentViewType;
- (id)contentView;
- (void).cxx_destruct;

@end
