@class NSArray;

@interface YtVideoSetting : NSObject {
    NSArray *_configs;
}

@property (nonatomic) double duration;
@property (nonatomic) double unit;

- (id)initWithFile:(id)a0;
- (id)initWithFileRes:(id)a0;
- (id)initWithJsonStr:(id)a0;
- (long long)argbAtElapse:(double)a0;
- (float)screenAtElapse:(double)a0;
- (void).cxx_destruct;

@end
