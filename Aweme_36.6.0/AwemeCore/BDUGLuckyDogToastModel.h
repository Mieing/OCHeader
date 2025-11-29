@class NSString, UIImage;

@interface BDUGLuckyDogToastModel : BDUGLuckyJSONModel

@property (nonatomic) long long toastId;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned long long symbolType;
@property (nonatomic) long long tsShowMs;
@property (nonatomic) long long tsExpireMs;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *toastKey;
@property (copy, nonatomic) NSString *subText;
@property (copy, nonatomic) NSString *picUrl;
@property (retain, nonatomic) UIImage *image;

- (void).cxx_destruct;

@end
