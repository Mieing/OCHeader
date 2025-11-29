@interface AWEInfoStickerManager : NSObject

- (void)fetchTemperatureCompletion:(id /* block */)a0;
- (void)fetchPOIPermissionCompletion:(id /* block */)a0;
- (void)p_fetchLocationCompletion:(id /* block */)a0;
- (id)fetchCurrentTime;

@end
