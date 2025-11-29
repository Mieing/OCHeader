@class NSString, NSArray;

@interface AWESearchAIGCCmdArgsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *targetID;
@property (copy, nonatomic) NSString *parentID;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *nextKey;
@property (nonatomic) BOOL isDynamicRender;
@property (copy, nonatomic) NSString *removeID;
@property (copy, nonatomic) NSString *replaceID;
@property (nonatomic) BOOL isFold;
@property (nonatomic) long long cardRank;
@property (nonatomic) BOOL isFirstCardData;
@property (nonatomic) BOOL isNotStatsTextCard;
@property (nonatomic) BOOL isAISearchLoadingCard;
@property (copy, nonatomic) NSString *insertId;
@property (copy, nonatomic) NSString *insertAction;
@property (copy, nonatomic) NSArray *dropConditions;
@property (nonatomic) long long cmdWaitCount;
@property (copy, nonatomic) NSString *cmdWaitId;
@property (nonatomic) BOOL cmdWait;
@property (nonatomic) BOOL disableIndexCmd;
@property (nonatomic) BOOL disableDetailCmd;
@property (nonatomic) BOOL notInAIAreaRendering;
@property (copy, nonatomic) NSString *dataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
