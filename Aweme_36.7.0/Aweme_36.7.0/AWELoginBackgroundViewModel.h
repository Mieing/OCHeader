@class AWEUserContext, NSObject;
@protocol AWEUserLoginUIAmbientConfig, AWEUserLoginUILayoutConfig;

@interface AWELoginBackgroundViewModel : NSObject

@property (retain, nonatomic) NSObject<AWEUserLoginUILayoutConfig> *layoutConfig;
@property (retain, nonatomic) NSObject<AWEUserLoginUIAmbientConfig> *ambientConfig;
@property (retain, nonatomic) AWEUserContext *userContext;

- (void).cxx_destruct;

@end
