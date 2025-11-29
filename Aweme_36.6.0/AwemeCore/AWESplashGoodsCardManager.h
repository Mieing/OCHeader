@class NSDictionary, NSString;

@interface AWESplashGoodsCardManager : HTSService <AWESplashGoodsCardManager>

@property (copy, nonatomic) NSDictionary *frameDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preDownloadGoodsCardsWithModel:(id)a0;
+ (id)updateLynxRawData:(id)a0;
+ (void)clickSplashLynxCard:(id)a0 clickInfo:(id)a1;

- (void).cxx_destruct;

@end
