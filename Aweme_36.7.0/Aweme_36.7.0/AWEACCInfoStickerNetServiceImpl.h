@class NSString;

@interface AWEACCInfoStickerNetServiceImpl : NSObject <ACCInfoStickerNetServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestTemperatureInfoStickersWithCityCode:(id)a0 completion:(id /* block */)a1;

@end
