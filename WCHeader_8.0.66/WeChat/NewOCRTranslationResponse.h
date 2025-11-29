@class NSString, NSData, NSMutableArray, BaseResponse;

@interface NewOCRTranslationResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int endFlag;
@property (retain, nonatomic) NSMutableArray *info;
@property (retain, nonatomic) NSData *ctx;
@property (nonatomic) float angle;
@property (retain, nonatomic) NSString *fromLanguage;
@property (retain, nonatomic) NSString *toLanguage;
@property (retain, nonatomic) NSString *brandWording;
@property (nonatomic) BOOL newOcrmt;
@property (retain, nonatomic) NSData *resImgFileid;
@property (retain, nonatomic) NSData *resImgAeskey;
@property (nonatomic) unsigned int resImgSize;
@property (nonatomic) float resAngle;
@property (retain, nonatomic) NSData *resFromLang;
@property (retain, nonatomic) NSData *resToLang;
@property (retain, nonatomic) NSData *resBrandWording;
@property (nonatomic) unsigned int resEndFlag;

+ (void)initialize;

@end
