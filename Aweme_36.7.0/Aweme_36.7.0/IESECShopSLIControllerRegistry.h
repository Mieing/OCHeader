@class NSString;
@protocol IESECShopSLICardController;

@interface IESECShopSLIControllerRegistry : NSObject

@property (copy, nonatomic) NSString *uniqueID;
@property (weak, nonatomic) id<IESECShopSLICardController> controller;
@property (nonatomic) BOOL stateRegistered;

+ (id)registryWithUniqueID:(id)a0 controller:(id)a1;

- (void).cxx_destruct;

@end
