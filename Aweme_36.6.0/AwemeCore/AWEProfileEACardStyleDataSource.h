@class NSArray, NSString;

@interface AWEProfileEACardStyleDataSource : AWEProfileEABaseDataSource <AWEProfileEAOneSectionDataSourceProtocol>

@property (retain, nonatomic) NSArray *cardViewArray;
@property (retain, nonatomic) NSArray *cardControllerArray;
@property (retain, nonatomic) NSArray *cardList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshUserModel:(id)a0;
- (id)cardControllerAtIndexPath:(id)a0;
- (id)cardViewAtIndexPath:(id)a0;
- (id)cardModelAtIndexPath:(id)a0;
- (id)cardViewWithCardType:(unsigned long long)a0;
- (id)allCardControllers;
- (id)allCardViews;
- (id)indexPathWithCardType:(unsigned long long)a0;
- (id)indexPathWithCardController:(id)a0;
- (id)indexPathWithCardView:(id)a0;
- (void)generateCardListWithUserModel:(id)a0;
- (long long)numberOfCard;
- (void).cxx_destruct;

@end
