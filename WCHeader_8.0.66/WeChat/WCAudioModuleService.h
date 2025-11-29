@protocol IWCAudioModuleService;

@interface WCAudioModuleService : NSObject

@property (class, retain, nonatomic) id<IWCAudioModuleService> externalIMP;

@end
