@class NSString;

@interface WACampusVoipRoomStatusCgi : WCBaseCgi

@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) long long roomStatus;

+ (void)voipRoom:(id)a0 syncStatus:(long long)a1;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
