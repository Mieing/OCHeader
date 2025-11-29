@class NSString, IESLiveGuideGameCPBubbleMessage;

@interface IESLiveGuideGameCPModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasPromotingGames;
@property (nonatomic) BOOL isShowIntroduce;
@property (copy, nonatomic) NSString *promotionPageUrl;
@property (nonatomic) BOOL hasPropPermission;
@property (nonatomic) BOOL isAgreePropProTocol;
@property (retain, nonatomic) IESLiveGuideGameCPBubbleMessage *bubbleMessage;
@property (nonatomic) unsigned long long containerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bubbleMessageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
