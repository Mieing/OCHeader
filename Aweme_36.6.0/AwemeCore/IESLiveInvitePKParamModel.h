@class NSString, NSDictionary;

@interface IESLiveInvitePKParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *toUserId;
@property (copy, nonatomic) NSString *secToUserId;
@property (copy, nonatomic) NSString *toRoomId;
@property (copy, nonatomic) NSString *signExtra;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *battleConfig;
@property (nonatomic) long long inviteType;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
