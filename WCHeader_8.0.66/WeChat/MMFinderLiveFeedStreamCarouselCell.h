@class MMFinderLiveFeedStreamCarouselBaseItem;
@protocol MMFinderLiveFeedStreamCarouselCellDelegate, MMFinderLiveFeedStreamCarouselItemProtocol;

@interface MMFinderLiveFeedStreamCarouselCell : MMFinderLiveFeedStreamWidgetBaseView

@property (weak, nonatomic) id<MMFinderLiveFeedStreamCarouselCellDelegate> delegate;
@property (retain, nonatomic) MMFinderLiveFeedStreamCarouselBaseItem<MMFinderLiveFeedStreamCarouselItemProtocol> *data;

- (void)updateData:(id)a0;
- (void)reload;
- (void)prepareForReuse;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)reportGenericAction:(unsigned long long)a0;
- (void).cxx_destruct;

@end
