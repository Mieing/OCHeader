@class NSArray, NSString;

@interface AWEIsTargetDevicePortraitHandler : AWECommonPortraitHandler

@property (copy, nonatomic) NSArray *targetDeviceList;
@property (retain, nonatomic) NSString *isTargetDeviceStr;

- (id)getPortrait;
- (void).cxx_destruct;
- (id)init;

@end
