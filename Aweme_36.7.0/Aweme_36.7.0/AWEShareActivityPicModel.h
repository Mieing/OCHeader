@class NSString, AWEShareActivityPicElementModel;

@interface AWEShareActivityPicModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *logo;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *backgroundPic;
@property (copy, nonatomic) NSString *guideText1;
@property (copy, nonatomic) NSString *guideText2;
@property (copy, nonatomic) NSString *guideText3;
@property (copy, nonatomic) NSString *qrCode;
@property (copy, nonatomic) NSString *descText;
@property (copy, nonatomic) NSString *picToken;
@property (retain, nonatomic) AWEShareActivityPicElementModel *showElement;
@property (retain, nonatomic) AWEShareActivityPicElementModel *saveElement;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
