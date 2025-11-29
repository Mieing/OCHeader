@class NSString;

@interface SearchEmoticonShare : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *emoticonMd5;
@property (nonatomic) unsigned int emoticonType;
@property (retain, nonatomic) NSString *emoticonProductId;
@property (retain, nonatomic) NSString *thumbImgUrl;
@property (retain, nonatomic) NSString *designerId;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *attachedText;
@property (retain, nonatomic) NSString *attachedTextColor;
@property (retain, nonatomic) NSString *lensId;
@property (nonatomic) unsigned int emoticonWidth;
@property (nonatomic) unsigned int emoticonHeight;
@property (retain, nonatomic) NSString *encryptUrl;
@property (retain, nonatomic) NSString *aesKey;

+ (void)initialize;

@end
