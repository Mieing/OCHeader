@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEStudioImageServiceImpl : NSObject <ACCImageServiceProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *colorQueue;
@property (retain, nonatomic) NSMutableDictionary *colorCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adjustedBgColor:(id)a0 shouldAdjustBrightness:(BOOL)a1;

- (void)getColorWithImage:(id)a0 cacheKey:(id)a1 completion:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })getWebImageSizeWithType:(unsigned long long)a0;
- (id)getBackImageForMusicSelectVCWithBackStatus:(BOOL)a0;
- (BOOL)needShowAWEApiErrorDescriptionWithDomain:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
