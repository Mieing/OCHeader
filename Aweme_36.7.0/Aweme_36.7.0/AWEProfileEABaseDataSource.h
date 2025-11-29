@interface AWEProfileEABaseDataSource : AWEProfileEABaseController

- (id)cardControllerAtIndexPath:(id)a0;
- (id)cardViewAtIndexPath:(id)a0;
- (id)cardModelAtIndexPath:(id)a0;
- (id)cardViewWithCardType:(unsigned long long)a0;
- (id)allCardControllers;
- (id)allCardViews;
- (id)indexPathWithCardType:(unsigned long long)a0;
- (id)indexPathWithCardController:(id)a0;
- (id)indexPathWithCardView:(id)a0;
- (id)filteredCardList:(id)a0;
- (id)cardControllerWithCardModel:(id)a0 userModel:(id)a1 commonParamModel:(id)a2;
- (void)viewDidLoad;

@end
