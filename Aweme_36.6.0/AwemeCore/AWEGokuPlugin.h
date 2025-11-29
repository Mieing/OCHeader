@protocol AWEGokuPluginTargetProtocol;

@interface AWEGokuPlugin : NSObject

@property (weak, nonatomic) id<AWEGokuPluginTargetProtocol> target;

+ (id)initWithTarget:(id)a0;

- (BOOL)isRespondsTo:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
