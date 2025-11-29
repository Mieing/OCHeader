@class IESECRecommendCommonUserModel, NSString, IESECRecommendCommonProductModel, IESECRecommmendCommonPromotionWrapperModel;

@interface IESECMallInnerFeedRecommendItemModel : MTLModel <MTLJSONSerializing, IGListDiffable>

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) long long recommendType;
@property (retain, nonatomic) IESECRecommendCommonUserModel *user;
@property (retain, nonatomic) IESECRecommendCommonProductModel *product;
@property (retain, nonatomic) IESECRecommmendCommonPromotionWrapperModel *promotion;
@property (copy, nonatomic) NSString *iconName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
