@class NSDictionary, NSString;
@protocol RxInjector, RTVURLFetcher;

@interface RTVCDNImageResourceManager : NSObject <RTVCDNImageResourceManager>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVURLFetcher> urlFetcher;
@property (readonly, nonatomic) NSDictionary *imageSizeDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
