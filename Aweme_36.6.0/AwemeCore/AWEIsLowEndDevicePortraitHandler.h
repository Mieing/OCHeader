@class NSArray, NSString;

@interface AWEIsLowEndDevicePortraitHandler : AWECommonPortraitHandler

@property (copy, nonatomic) NSArray *lowEndDeviceList;
@property (retain, nonatomic) NSString *isLowEndDeviceStr;

- (id)getPortrait;
- (id)obtainIsLowEndDeviceNew;
- (id)obtainIsLowEndDevice;
- (void).cxx_destruct;
- (id)init;

@end
