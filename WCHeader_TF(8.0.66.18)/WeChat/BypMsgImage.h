@class NSString;

@interface BypMsgImage : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *aeskey;
@property (nonatomic) unsigned int cryptVer;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int hdSize;
@property (nonatomic) unsigned int midSize;
@property (nonatomic) unsigned int thumbSize;
@property (nonatomic) unsigned int thumbHeight;
@property (nonatomic) unsigned int thumbWidth;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int midHeight;
@property (nonatomic) unsigned int midWidth;
@property (nonatomic) unsigned int hdHeight;
@property (nonatomic) unsigned int hdWidth;
@property (nonatomic) unsigned int hevcHdSize;
@property (nonatomic) unsigned int hevcMidSize;
@property (nonatomic) unsigned int hevcThumbSize;

+ (void)initialize;

@end
