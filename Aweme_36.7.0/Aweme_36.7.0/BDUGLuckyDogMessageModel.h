@class NSString, UIImage, NSArray;

@interface BDUGLuckyDogMessageModel : BDUGLuckyJSONModel

@property (nonatomic) long long letterId;
@property (copy, nonatomic) NSString *picUrl;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonBg;
@property (nonatomic) unsigned long long position;
@property (copy, nonatomic) NSArray *blockUrls;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) double tsShowMs;
@property (nonatomic) double tsExpireMs;
@property (nonatomic) double duration;
@property (nonatomic) BOOL forbidLandscape;
@property (nonatomic) BOOL isFeedbackMessage;
@property (copy, nonatomic) NSArray *iosBlockList;
@property (copy, nonatomic) NSArray *iosAllowList;
@property (copy, nonatomic) NSString *letterKey;

- (void).cxx_destruct;

@end
