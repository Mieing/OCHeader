@class NSString, NSObject;
@protocol AWEUserLoginUIAmbientConfig, AWEUserLoginUILayoutConfig;

@interface AWEUserLoginUIContext : NSObject

@property (retain, nonatomic) NSString *loginTitle;
@property (retain, nonatomic) NSObject<AWEUserLoginUILayoutConfig> *layoutConfig;
@property (retain, nonatomic) NSObject<AWEUserLoginUIAmbientConfig> *ambientConfig;

- (void).cxx_destruct;

@end
