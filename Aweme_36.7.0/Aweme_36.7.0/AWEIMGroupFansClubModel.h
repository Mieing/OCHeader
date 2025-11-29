@class NSString;

@interface AWEIMGroupFansClubModel : AWEBaseApiModel <AWEIMGroupParticipantBizInfoModel>

@property (copy, nonatomic) NSString *belongCid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *groupOwnerUid;
@property (nonatomic) long long level;
@property (nonatomic) BOOL lightUp;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)bizInfoModel;
- (void).cxx_destruct;

@end
