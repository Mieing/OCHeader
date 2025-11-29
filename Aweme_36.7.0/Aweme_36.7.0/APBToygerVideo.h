@interface APBToygerVideo : NSObject

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long duration;
@property (nonatomic) long long bitrate;
@property (nonatomic) long long fps;
@property (nonatomic) BOOL enable;

+ (id)defaultConfig;

@end
