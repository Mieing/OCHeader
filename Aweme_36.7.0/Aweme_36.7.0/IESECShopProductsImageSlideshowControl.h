@class NSString, NSTimer, IESECShopProductsPlayableTask;

@interface IESECShopProductsImageSlideshowControl : NSObject <IESECShopProductsPlayableMediaControl> {
    NSTimer *_timer;
    IESECShopProductsPlayableTask *_currentTask;
}

@property (readonly, nonatomic) IESECShopProductsPlayableTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
