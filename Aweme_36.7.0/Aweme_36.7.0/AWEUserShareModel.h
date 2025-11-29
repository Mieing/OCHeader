@class NSString, NSDictionary, AWEURLModel;

@interface AWEUserShareModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *shareDescription;
@property (retain, nonatomic) AWEURLModel *shareQRCodeURL;
@property (retain, nonatomic) NSString *shareURL;
@property (retain, nonatomic) NSString *shareWeiboDescription;
@property (retain, nonatomic) NSString *shareTitle;
@property (copy, nonatomic) NSString *shareTitleMyself;
@property (copy, nonatomic) NSString *shareTitleOther;
@property (retain, nonatomic) AWEURLModel *shareImageURL;
@property (nonatomic) BOOL isPersist;
@property (copy, nonatomic) NSDictionary *lifeShareExt;

+ (id)shareQRCodeURLJSONTransformer;
+ (id)shareImageURLJSONTransformer;
+ (id)lifeShareExtJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)addExtraParamsForLifeShareExt:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDict:(id)a0;

@end
