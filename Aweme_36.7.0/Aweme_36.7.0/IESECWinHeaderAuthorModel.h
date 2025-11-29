@class IESECWinAuthorGoodEcom, IESECURLModel, NSString, NSArray, IESECGoodsDetailAuthorReputationModel, IESECWinAuthorFansInfo;

@interface IESECWinHeaderAuthorModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *avatar;
@property (retain, nonatomic) IESECURLModel *followBubble;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) IESECGoodsDetailAuthorReputationModel *reputation;
@property (retain, nonatomic) IESECWinAuthorFansInfo *fansInfo;
@property (copy, nonatomic) NSString *fansAmountDes;
@property (nonatomic) BOOL newReputationStyle;
@property (copy, nonatomic) NSString *followerOrderCount;
@property (retain, nonatomic) NSArray *impressionWords;
@property (retain, nonatomic) NSArray *guideInfo;
@property (retain, nonatomic) IESECWinAuthorGoodEcom *goodAuthor;
@property (retain, nonatomic) IESECWinAuthorGoodEcom *authorNameIcon;
@property (retain, nonatomic) IESECURLModel *fansClubRedpackBubble;
@property (retain, nonatomic) NSArray *authorGuideInfoTop;
@property (retain, nonatomic) NSArray *authorGuideInfoBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)guideInfoJSONTransformer;
+ (id)authorGuideInfoTopJSONTransformer;
+ (id)authorGuideInfoBottomJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
