@interface AWEPOIGoodsDetailCollectObject : NSObject

@property (nonatomic) BOOL isCollectedRequestOnAir;

- (void)collectGrouponDetailWithGrouponID:(id)a0 collect:(BOOL)a1 needHintToast:(BOOL)a2 extraReqParams:(id)a3 favoriteLifeInfo:(id)a4 loginResult:(id /* block */)a5 completion:(id /* block */)a6;

@end
