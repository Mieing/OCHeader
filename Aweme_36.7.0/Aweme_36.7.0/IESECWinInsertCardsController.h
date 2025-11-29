@interface IESECWinInsertCardsController : NSObject

+ (void)configWithInsertCardsResponse:(id)a0 selectedModel:(id)a1 currentIndex:(unsigned long long)a2;
+ (void)requestInsertCardsWithContext:(id)a0 productId:(id)a1 cardType:(unsigned long long)a2 insertParams:(id)a3 filters:(id)a4 completion:(id /* block */)a5;

@end
