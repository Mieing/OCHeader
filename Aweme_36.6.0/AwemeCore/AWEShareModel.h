@class NSString, NSDictionary, AWEURLModel;

@interface AWEShareModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *shareUrl;
@property (nonatomic) BOOL isPersist;
@property (retain, nonatomic) AWEURLModel *shareQRCodeURL;
@property (retain, nonatomic) AWEURLModel *shareImageURL;
@property (retain, nonatomic) NSString *shareWeiboDesc;
@property (retain, nonatomic) NSString *shareLinkDesc;
@property (retain, nonatomic) NSString *shareTitle;
@property (retain, nonatomic) NSString *shareDesc;
@property (retain, nonatomic) NSDictionary *shareBusinessExt;
@property (retain, nonatomic) NSString *manageGoodsURL;
@property (retain, nonatomic) NSString *manageFXGURL;
@property (retain, nonatomic) NSString *shareSignatureDesc;
@property (retain, nonatomic) NSString *shareSignatureUrl;
@property (copy, nonatomic) NSString *shareChannelConfig;
@property (copy, nonatomic) NSString *shareShortenBelong;
@property (nonatomic) BOOL shareUrlDisable;

+ (id)shareQRCodeURLJSONTransformer;
+ (id)shareImageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
