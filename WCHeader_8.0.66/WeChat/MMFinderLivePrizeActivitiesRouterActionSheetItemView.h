@class MMUIImageView, NSString, MMUIView, MMUIButton, MMUILabel;

@interface MMFinderLivePrizeActivitiesRouterActionSheetItemView : MMFinderLiveBottomTextButton

@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) MMUIView *imageBackgroundView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) MMUIImageView *imageView;

- (id)initWithImageName:(id)a0 title:(id)a1;
- (void)updateWithTitle:(id)a0;
- (void)createUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)actionClick;
- (void).cxx_destruct;

@end
