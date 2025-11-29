@class AWEShareActivityPicConfigModel;

@interface AWEShareActivityPicElementModel : AWEBaseApiModel

@property (retain, nonatomic) AWEShareActivityPicConfigModel *logo;
@property (retain, nonatomic) AWEShareActivityPicConfigModel *avatar;
@property (retain, nonatomic) AWEShareActivityPicConfigModel *name;
@property (retain, nonatomic) AWEShareActivityPicConfigModel *desc;
@property (retain, nonatomic) AWEShareActivityPicConfigModel *line;
@property (retain, nonatomic) AWEShareActivityPicConfigModel *qrCode;

+ (id)avatarJSONTransformer;
+ (id)logoJSONTransformer;
+ (id)lineJSONTransformer;
+ (id)qrCodeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)nameJSONTransformer;
+ (id)descJSONTransformer;

- (void).cxx_destruct;

@end
