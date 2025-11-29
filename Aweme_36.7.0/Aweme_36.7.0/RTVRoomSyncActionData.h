@class NSDictionary;
@protocol Optional;

@interface RTVRoomSyncActionData : JSONModel

@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSDictionary<Optional> *ext;

+ (id)keyMapper;

- (id)initWithActionType:(long long)a0 ext:(id)a1;
- (void).cxx_destruct;

@end
