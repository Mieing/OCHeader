@class UIStackView, NSString, IESECGoodsCommentViewModel, UILabel, UIView, IESECCarouselCell;

@interface IESECVideoFeedCommentView : UIView <IESECCarouselCellLayoutProtocol> {
    long long _style;
    IESECGoodsCommentViewModel *_viewModel;
}

@property (retain, nonatomic) IESECCarouselCell *carouselView;
@property (retain, nonatomic) UILabel *smallDescLabel;
@property (retain, nonatomic) UIStackView *largeDescContainer;
@property (retain, nonatomic) UILabel *largeDescLabel;
@property (retain, nonatomic) UILabel *subDescLabel;
@property (retain, nonatomic) UIView *line;
@property (copy, nonatomic) id /* block */ didScrollToPageBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIWithModel:(id)a0;
- (struct CGSize { double x0; double x1; })carouselCell:(id)a0 sizeForItemAtIndexPath:(id)a1;
- (void)showNextPage;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;
- (void)_setup;

@end
