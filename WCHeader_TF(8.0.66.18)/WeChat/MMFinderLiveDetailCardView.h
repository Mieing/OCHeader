@class MMFinderLiveDropGiftDetailCardViewModel, UIImageView;

@interface MMFinderLiveDetailCardView : UIView

@property (weak, nonatomic) MMFinderLiveDropGiftDetailCardViewModel *viewModel;
@property (retain, nonatomic) UIImageView *backgroundImageView;

- (id)init;
- (void)updateViewModel:(id)a0;
- (void)setup;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
