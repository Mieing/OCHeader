@class NSNumber;

@interface IESLiveStartGuestBattleParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *openType;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *loserNum;
@property (retain, nonatomic) NSNumber *scoreType;
@property (retain, nonatomic) NSNumber *isAnchorInvolved;
@property (retain, nonatomic) NSNumber *uiType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
