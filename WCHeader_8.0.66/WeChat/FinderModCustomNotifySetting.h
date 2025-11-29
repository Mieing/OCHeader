@class NSString;

@interface FinderModCustomNotifySetting : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int optype;
@property (nonatomic) unsigned int noticeType;
@property (nonatomic) unsigned long long objectId;

+ (void)initialize;

@end
