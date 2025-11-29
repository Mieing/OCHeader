@class NSString, IESLLifeURLModel, NSDictionary;

@interface IESLLShareModel : IESLLifeBaseApiModel

@property (retain, nonatomic) NSString *shareUrl;
@property (nonatomic) BOOL isPersist;
@property (retain, nonatomic) IESLLifeURLModel *shareQRCodeURL;
@property (retain, nonatomic) IESLLifeURLModel *shareImageURL;
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

+ (id)shareQRCodeURLJSONTransformer;
+ (id)shareImageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
