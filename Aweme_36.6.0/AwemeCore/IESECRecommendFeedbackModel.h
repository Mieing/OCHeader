@class NSArray, IESECRecommendFeedbackItemModel, NSString;

@interface IESECRecommendFeedbackModel : MTLModel <MTLJSONSerializing> {
    NSArray *_firstPageItemList;
    NSArray *_secondPageItemList;
}

@property (retain, nonatomic) NSArray *itemList;
@property (nonatomic) unsigned long long firstPageLimit;
@property (retain, nonatomic) IESECRecommendFeedbackItemModel *clickModel;
@property (nonatomic) unsigned long long closeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
