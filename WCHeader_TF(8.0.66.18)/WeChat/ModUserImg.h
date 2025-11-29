@class NSData, NSString;

@interface ModUserImg : WXPBGeneratedMessage

@property (nonatomic) unsigned int imgType;
@property (nonatomic) unsigned int imgLen;
@property (retain, nonatomic) NSData *imgBuf;
@property (retain, nonatomic) NSString *imgMd5;
@property (retain, nonatomic) NSString *bigHeadImgUrl;
@property (retain, nonatomic) NSString *smallHeadImgUrl;

+ (void)initialize;

@end
