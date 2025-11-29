@class AWEDCFeedPageContext;

@interface AWEDCFeedSearchBarAbility : NSObject

@property (weak, nonatomic) AWEDCFeedPageContext *context;

- (void)trigerSearchMagnifierClick;
- (void)setSearchBarAlpha:(double)a0;
- (void)showSeparatorView:(BOOL)a0;
- (id)classNameWithReferString;
- (void)setSearchBarPlaceHolderText:(id)a0;
- (void)trigerSearchBarClick;
- (void)trigerSearchButtonClick;
- (void)trigerFetchGuessWord;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
