@class WCFinderFeedImageCDNView, WCFinderStaticCoverInfoView, NSString;

@interface WCFinderFriendsAlsoFollowsCollectionViewCell : UICollectionViewCell <WCFinderShareAbstractCell>

@property (retain, nonatomic) WCFinderFeedImageCDNView *coverView;
@property (retain, nonatomic) WCFinderStaticCoverInfoView *infoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellID;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithDataItem:(id)a0 commentScene:(int)a1;
- (void)layoutSubviews;
- (id)transitionStartImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionStartImageRectInView:(id)a0 willPresent:(BOOL)a1;
- (void)doShareAnimation;
- (void).cxx_destruct;

@end
