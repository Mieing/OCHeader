@class WCFinderJumpInfo, NSString, WCFinderLBSCardContentView, FinderLocation, FinderJumpInfo_Style;
@protocol WCFinderJumpInfoLBSCardViewDelegate;

@interface WCFinderJumpInfoLBSCardView : UIView <WCFinderLBSCardContentViewDelegate>

@property (retain, nonatomic) WCFinderLBSCardContentView *cardContent;
@property (retain, nonatomic) FinderJumpInfo_Style *style;
@property (nonatomic) int showPosition;
@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (retain, nonatomic) FinderLocation *locationInfo;
@property (weak, nonatomic) id<WCFinderJumpInfoLBSCardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (void)layoutSubviews;
- (void)lbsCardChangeFavState:(BOOL)a0;
- (void)lbsCardDidClickCard;
- (void)lbsCardLayoutHeightChanged;
- (void)lbsCardSetupFavButtonReport:(id)a0;
- (void).cxx_destruct;

@end
