@class NSString;

@interface RTVRoomRTCInfo : JSONModel

@property (copy, nonatomic) NSString *rtcExtInfo;
@property (copy, nonatomic) NSString *coreSetting;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
