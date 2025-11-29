@class UIImageView, NSString, UIView;

@interface MMFinderLiveMinimizeConnectMicUserAttachWidgetObj : NSObject

@property (retain, nonatomic) UIImageView *contentImageView;
@property (nonatomic) struct CGPoint { double x; double y; } normalizedCenter;
@property (nonatomic) struct CGSize { double width; double height; } normalizedSize;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSString *businessName;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) BOOL forceCenteredLayoutMode;

- (id)initWithRootView:(id)a0;
- (void)refresh;
- (void)attachToContainerView:(id)a0;
- (void)deAttachFromContainerView;
- (void)layoutUI;
- (id)getHeaderImageView;
- (void)createContentImageView;
- (id)getSnapshotUserInfoImage;
- (void).cxx_destruct;

@end
