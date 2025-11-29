@class NSString, MMHeadImageView;

@interface MMLiveLikeHeaderImageView : MMLiveLikeImageView

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (copy, nonatomic) NSString *identityId;
@property (copy, nonatomic) NSString *headImageUrl;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutHeaderImageView;
- (void)updateIdentityId:(id)a0 headUrl:(id)a1;
- (void).cxx_destruct;

@end
