@class NSString, UIImageView, UILabel, AWEUserModel;

@interface AWEStarLinkView : UIView <AWEStarLinkView>

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShow;
- (id)defaultIconForModel:(id)a0;
- (void)trackTap;
- (void)trackShowFailed:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)handleTap:(id)a0;
- (void)didTap;
- (void)updateWithUser:(id)a0;

@end
