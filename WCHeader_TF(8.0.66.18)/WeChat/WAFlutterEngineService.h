@protocol IWAFlutterEngineService;

@interface WAFlutterEngineService : NSObject

@property (class, retain, nonatomic) Class externalIMP;
@property (class, readonly, nonatomic) id<IWAFlutterEngineService> sharedService;

@end
