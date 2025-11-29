@class NSString;
@protocol IESECShopControllerManagerV2, IESECShopPageContextV2, IESECShopLayoutManager;

@interface IESECShopControllerV2 : NSObject <IESECShopControllerV2>

@property (weak, nonatomic) id<IESECShopPageContextV2> pageContextV2;
@property (weak, nonatomic) id<IESECShopLayoutManager> layoutManager;
@property (weak, nonatomic) id<IESECShopControllerManagerV2> controllerManagerV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
