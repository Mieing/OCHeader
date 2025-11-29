@class NSData, NSString;

@interface DeviceAutoLoginToastWrap : NSObject

@property (retain, nonatomic) NSData *deviceId;
@property (nonatomic) unsigned int iconType;
@property (retain, nonatomic) NSString *wording;

- (void).cxx_destruct;

@end
