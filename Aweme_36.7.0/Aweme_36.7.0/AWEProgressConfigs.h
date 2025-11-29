@class NSArray, AWEProgressUIConfig, AWEProgressHotZoneConfig;

@interface AWEProgressConfigs : NSObject

@property (copy, nonatomic) NSArray *elementArray;
@property (retain, nonatomic) AWEProgressUIConfig *uiConfig;
@property (retain, nonatomic) AWEProgressHotZoneConfig *hotZoneConfig;

- (void).cxx_destruct;

@end
