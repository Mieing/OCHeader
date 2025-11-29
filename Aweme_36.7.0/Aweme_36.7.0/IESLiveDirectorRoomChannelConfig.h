@class NSNumber, NSString, HTSLiveUser;

@interface IESLiveDirectorRoomChannelConfig : NSObject

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSLiveUser *director;
@property (copy, nonatomic) NSString *toast;

- (void).cxx_destruct;

@end
