@class NSString, WCFinderHeadImageView, WCFinderAuthInfoIconView, UILabel, WCFinderContact;

@interface MMFinderHeaderInfoView : UIView <WCFinderHeadImageViewDelegate>

@property (retain, nonatomic) WCFinderContact *finderContact;
@property (retain, nonatomic) WCFinderHeadImageView *headerImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authorizedIconView;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (copy, nonatomic) id /* block */ headerImageDidUpdateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFinderContact:(id)a0;
- (void)updateFinderContact:(id)a0;
- (void)layoutSubviews;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)a0 image:(id)a1 urlString:(id)a2;
- (void).cxx_destruct;

@end
