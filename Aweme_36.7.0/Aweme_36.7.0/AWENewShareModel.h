@class NSString, AWENewURLModel;

@interface AWENewShareModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *shareUrl;
@property (copy, nonatomic) NSString *shareWeiboDesc;
@property (copy, nonatomic) NSString *shareDesc;
@property (copy, nonatomic) NSString *shareTitle;
@property (retain, nonatomic) AWENewURLModel *shareQRCodeURL;
@property (copy, nonatomic) NSString *manageGoodsURL;
@property (retain, nonatomic) AWENewURLModel *shareImageURL;
@property (nonatomic) int isPersist;
@property (copy, nonatomic) NSString *manageFXGURL;
@property (copy, nonatomic) NSString *shareTitleMyself;
@property (copy, nonatomic) NSString *shareTitleOther;
@property (copy, nonatomic) NSString *shareLinkDesc;
@property (copy, nonatomic) NSString *shareSignatureUrl;
@property (copy, nonatomic) NSString *shareSignatureDesc;
@property (copy, nonatomic) NSString *shareQuote;
@property (copy, nonatomic) NSString *whatsappDesc;
@property (copy, nonatomic) NSString *shareDescInfo;
@property (copy, nonatomic) NSString *shareShortenBelong;
@property (copy, nonatomic) NSString *shareChannelConfig;
@property (copy, nonatomic) NSString *lifeShareExt;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
