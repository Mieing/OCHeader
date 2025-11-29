@class NSString;

@interface IESFalconInfo : NSObject

@property (class, copy, nonatomic) NSString *deviceId;
@property (class, copy, nonatomic) NSString *platformDomain;

+ (void)setGetDeviceIDBlock:(id /* block */)a0;

@end
