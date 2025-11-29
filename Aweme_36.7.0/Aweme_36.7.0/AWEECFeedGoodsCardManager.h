@class NSString;

@interface AWEECFeedGoodsCardManager : NSObject <AWEGrowGrassHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getFeedCardRequestWithParams:(id)a0 completion:(id /* block */)a1;

- (void)handleGrowGrassInfoWithGrassKey:(id)a0 awemeModel:(id)a1 extra:(id)a2;

@end
