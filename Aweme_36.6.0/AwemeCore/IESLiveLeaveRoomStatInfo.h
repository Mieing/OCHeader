@class NSString, HMDOOMCrashInfo;

@interface IESLiveLeaveRoomStatInfo : NSObject

@property (nonatomic) int reason;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) HMDOOMCrashInfo *info;

- (void).cxx_destruct;

@end
