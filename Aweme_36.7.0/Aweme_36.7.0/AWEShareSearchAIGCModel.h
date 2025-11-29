@class NSString;

@interface AWEShareSearchAIGCModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *imMsgSchema;
@property (copy, nonatomic) NSString *qrCodeLink;
@property (copy, nonatomic) NSString *screenShotLink;
@property (copy, nonatomic) NSString *shareLink;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *shareLinkDesc;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
