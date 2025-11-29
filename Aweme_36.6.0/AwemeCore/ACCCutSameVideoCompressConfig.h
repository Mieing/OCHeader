@class NSString, LVVideoCompressConfig;

@interface ACCCutSameVideoCompressConfig : NSObject <ACCCutSameVideoCompressConfigProtocol>

@property (nonatomic) long long maxFps;
@property (nonatomic) unsigned long long maxResolution;
@property (nonatomic, getter=isIgnore) BOOL ignore;
@property (retain, nonatomic) LVVideoCompressConfig *originConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isWorseThanIPhone6s;
+ (id)defaultConfig;

- (id)initWithFps:(long long)a0 resolution:(unsigned long long)a1;
- (void).cxx_destruct;

@end
