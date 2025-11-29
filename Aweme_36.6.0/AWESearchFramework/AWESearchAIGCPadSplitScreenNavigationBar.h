@class BDImageView, NSString, UIImage, UIButton;
@protocol AWESearchAIGCNavigationBarDelegate;

@interface AWESearchAIGCPadSplitScreenNavigationBar : UIView <AWESearchAIGCNavigationBarProtocol>

@property (retain, nonatomic) BDImageView *titleRegion;
@property (retain, nonatomic) UIImage *mainIconImage;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) BOOL showTitleRegion;
@property (weak, nonatomic) id<AWESearchAIGCNavigationBarDelegate> delegate;
@property (nonatomic) unsigned long long transitionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backClick;
- (void)refreshIconImage;
- (void)setTitleRegionWithUrls:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRegionFrame;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
