@class NSString, NSArray, IESLLLiveMessageRefresh, IESLLLiveMessageUpdate, IESLLLiveMessageDrawLotteryResult, IESLLLiveMessageAtmosphereInfo;

@interface IESLLLiveRoomMessage : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long updateType;
@property (nonatomic) BOOL refreshSingleCard;
@property (copy, nonatomic) NSString *pushTime;
@property (copy, nonatomic) NSArray *cardIds;
@property (copy, nonatomic) IESLLLiveMessageRefresh *refreshGrouponInfo;
@property (copy, nonatomic) IESLLLiveMessageUpdate *updatedGrouponInfo;
@property (retain, nonatomic) IESLLLiveMessageUpdate *updatedGrouponInfoNew;
@property (retain, nonatomic) IESLLLiveMessageRefresh *refreshGrouponInfoNew;
@property (retain, nonatomic) IESLLLiveMessageDrawLotteryResult *drawLotteryResult;
@property (retain, nonatomic) IESLLLiveMessageDrawLotteryResult *lifeLotteryDraw;
@property (retain, nonatomic) IESLLLiveMessageAtmosphereInfo *atmosphereInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
