@class NSString, NSNumber;

@interface PigeonDeviceInfo : NSObject

@property (copy, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSNumber *deviceType;
@property (copy, nonatomic) NSString *deviceNickname;
@property (copy, nonatomic) NSString *deviceRemark;
@property (copy, nonatomic) NSString *devicePath;
@property (copy, nonatomic) NSString *deviceUUID;
@property (copy, nonatomic) NSString *uriPath;

+ (id)makeWithDeviceId:(id)a0 deviceType:(id)a1 deviceNickname:(id)a2 deviceRemark:(id)a3 devicePath:(id)a4 deviceUUID:(id)a5 uriPath:(id)a6;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
