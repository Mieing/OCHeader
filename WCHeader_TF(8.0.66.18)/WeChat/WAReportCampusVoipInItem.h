@class NSString;

@interface WAReportCampusVoipInItem : WAReportBaseItem

@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) unsigned long long voipInScene;
@property (nonatomic) long long msgId;
@property (nonatomic) long long createTime;
@property (nonatomic) long long receiveTime;

+ (void)reportWithRoomId:(id)a0 voipInScene:(unsigned long long)a1 appId:(id)a2 msgId:(long long)a3 createTime:(long long)a4;
+ (void)reportWithRoomId:(id)a0 voipInScene:(unsigned long long)a1 appId:(id)a2 msgId:(long long)a3 createTime:(long long)a4 receiveTime:(long long)a5;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
