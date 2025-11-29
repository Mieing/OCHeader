@class AWELifeLiveMessageDrawLotteryResult, NSString, NSArray, AWELifeLiveMessageRefresh, AWELifeLiveMessageUpdate, AWELifeLiveMessageAtmosphereInfo;

@interface AWELifeLiveMessage : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long updateType;
@property (nonatomic) BOOL refreshSingleCard;
@property (copy, nonatomic) NSString *pushTime;
@property (copy, nonatomic) NSArray *cardIds;
@property (copy, nonatomic) AWELifeLiveMessageRefresh *refreshGrouponInfo;
@property (copy, nonatomic) AWELifeLiveMessageUpdate *updatedGrouponInfo;
@property (retain, nonatomic) AWELifeLiveMessageUpdate *updatedGrouponInfoNew;
@property (retain, nonatomic) AWELifeLiveMessageRefresh *refreshGrouponInfoNew;
@property (retain, nonatomic) AWELifeLiveMessageDrawLotteryResult *drawLotteryResult;
@property (retain, nonatomic) AWELifeLiveMessageDrawLotteryResult *lifeLotteryDraw;
@property (retain, nonatomic) AWELifeLiveMessageAtmosphereInfo *atmosphereInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
