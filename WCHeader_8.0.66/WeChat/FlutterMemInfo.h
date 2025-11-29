@interface FlutterMemInfo : NSObject

@property (nonatomic) long long vmSize;
@property (nonatomic) long long imageSize;
@property (nonatomic) long long pictureSize;

+ (id)makeWithVmSize:(long long)a0 imageSize:(long long)a1 pictureSize:(long long)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
