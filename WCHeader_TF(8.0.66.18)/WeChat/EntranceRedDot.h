@class NSString;

@interface EntranceRedDot : WXPBGeneratedMessage

@property (nonatomic) unsigned int redDotType;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int resourceTypeBits;
@property (retain, nonatomic) NSString *noticeId;
@property (nonatomic) unsigned int msgType;

+ (void)initialize;

@end
