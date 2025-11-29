@class AWESearchSeedFilterViewPosConfiguration, AWESearchSeedFilterViewContConfiguration;

@interface AWESearchSeedFilterViewUtil : NSObject

@property (nonatomic) unsigned long long theme;
@property (retain, nonatomic) AWESearchSeedFilterViewContConfiguration *contConfiguration;
@property (retain, nonatomic) AWESearchSeedFilterViewPosConfiguration *posConfiguration;

+ (void)setViewBorder:(id)a0 color:(id)a1 border:(float)a2 type:(long long)a3 length:(double)a4;

- (void).cxx_destruct;

@end
