@class PIABiMapTable;

@interface PIAInterfaceCenter : NSObject

@property (retain, nonatomic) Class network;
@property (retain, nonatomic) Class userInfo;
@property (retain, nonatomic) Class applicationInfo;
@property (retain, nonatomic) Class hostSettings;
@property (retain, nonatomic) Class trackers;
@property (retain, nonatomic) PIABiMapTable *piaEnv;

+ (void)initialize;
+ (id)defaultCenter;

- (void).cxx_destruct;
- (id)init;

@end
