@class NSString;

@interface IESLivePlayerVideoEffectConfiguration : NSObject

@property (copy, nonatomic) NSString *platformConfig;
@property (copy, nonatomic) NSString *cachePath;
@property (copy, nonatomic) NSString *license;
@property (copy, nonatomic) NSString *abConfig;
@property (copy, nonatomic) NSString *userData;
@property (copy, nonatomic) NSString *videoEffectType;
@property (nonatomic) BOOL enableMsgListenerOpt;
@property (nonatomic) BOOL useGL30;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) void /* function */ *resourceFinder;
@property (nonatomic) void /* function */ *resourceFinderRelease;
@property (copy, nonatomic) id /* block */ msgListener;

- (void).cxx_destruct;

@end
