@class NSString;

@interface RTVVoipPollingPullRoomInfoModel : NSObject

@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, nonatomic) double timeInterval;
@property (readonly, nonatomic) long long mergeStrategy;

- (id)initWithRoomID:(id)a0 timeInterval:(double)a1 mergeStrategy:(long long)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
