@class NSArray, NSNumber, AWEGeneralSearchModel;

@interface AWEGeneralSearchVirtualCombinateCard : NSObject

@property (copy, nonatomic) NSArray *subCardList;
@property (retain, nonatomic) NSNumber *cardRank;
@property (retain, nonatomic) AWEGeneralSearchModel *model;

- (id)initWithGeneralSearchModel:(id)a0;
- (BOOL)isSubCardParentCombinateCardWithsubCardModel:(id)a0;
- (id)combinateCardAwemeListWithSubCardModel:(id)a0;
- (id)subCardList:(id)a0;
- (void)attachWithVirtualCombinateCard;
- (void).cxx_destruct;

@end
