@class NSString;

@interface BypMsgVideo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned int playtime;
@property (retain, nonatomic) NSString *thumbAeskey;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int thumbSize;
@property (nonatomic) unsigned int thumbWidth;
@property (nonatomic) unsigned int thumbHeight;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *fileparam;
@property (retain, nonatomic) NSString *newmd5;

+ (void)initialize;

@end
