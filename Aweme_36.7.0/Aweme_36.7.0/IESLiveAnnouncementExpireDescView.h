@class NSArray;

@interface IESLiveAnnouncementExpireDescView : UIView

@property (copy, nonatomic) NSArray *desc;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)onBackButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)setupData;

@end
