@class IESECLiveRoomParams, NSMutableDictionary;

@interface IESECLiveMonitorCommonInfo : NSObject

@property (retain, nonatomic) IESECLiveRoomParams *roomParams;
@property (retain, nonatomic) NSMutableDictionary *basicInfo;
@property (nonatomic) BOOL openWithSaaS;

- (id)p_currentUserID;
- (id)initWithRoomParams:(id)a0;
- (void)p_generateBasicInfo;
- (BOOL)p_isAudience;
- (id)basicMonitorInfo;
- (void).cxx_destruct;

@end
