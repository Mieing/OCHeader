@class NSString, NSArray, NSDictionary, IESECMallDeepFeedAdModel;

@interface IESECMallDeepFeedRecommendCardModel : MTLModel <MTLJSONSerializing, IGListDiffable>

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *cartURL;
@property (copy, nonatomic) NSArray *products;
@property (nonatomic) BOOL isManualSlided;
@property (nonatomic) BOOL hasMainCoverVideo;
@property (retain, nonatomic) NSDictionary *custom;
@property (nonatomic) long long lastReportPictureSlideIndex;
@property (nonatomic) long long pageNum;
@property (copy, nonatomic) IESECMallDeepFeedAdModel *ad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
