@protocol BDARifleAdInfoDataSource, BDARifleDelegate;

@interface BDARifleMethod : BDXBridgeMethod

@property (weak, nonatomic) id<BDARifleDelegate, BDARifleAdInfoDataSource> BDARifleDelegate;

+ (id)BDARifleMethodName;

- (void).cxx_destruct;
- (id)methodName;

@end
