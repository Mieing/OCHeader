@protocol AWEProtectionSharedConfigProtocol;

@interface AWEProtectionMultiConfig : NSObject

@property (class, readonly, nonatomic) id<AWEProtectionSharedConfigProtocol> shared;

@end
