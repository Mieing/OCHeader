@class NSString, NSArray, IESECMallInnerFeedProductModel, IESECMallInnerFeedAuthorModel, NSDictionary;

@interface IESECMallInnerFeedRecommendCardModel : MTLModel <MTLJSONSerializing, IGListDiffable>

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *cartURL;
@property (copy, nonatomic) NSArray *products;
@property (retain, nonatomic) IESECMallInnerFeedProductModel *product;
@property (retain, nonatomic) IESECMallInnerFeedAuthorModel *author;
@property (nonatomic) BOOL isFirstCard;
@property (nonatomic) BOOL isManualSlided;
@property (nonatomic) BOOL hasMainCoverVideo;
@property (nonatomic) BOOL hasLayoutImage;
@property (retain, nonatomic) NSDictionary *custom;
@property (nonatomic) long long lastReportPictureSlideIndex;
@property (copy, nonatomic) NSString *innerTitle;
@property (nonatomic) long long descType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
