@interface TPLoopbackParams : NSObject

@property (nonatomic) BOOL isLoopback;
@property (nonatomic) long long startPositionMs;
@property (nonatomic) long long endPositionMs;

+ (id)paramsWithIsLoopback:(BOOL)a0 startPositionMs:(long long)a1 endPositionMs:(long long)a2;

@end
