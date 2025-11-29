@class NSData, NSString;

@interface FinderObjectWrap : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *finderObject;
@property (retain, nonatomic) NSString *tid;
@property (nonatomic) int commentScene;
@property (nonatomic) unsigned long long feedSource;
@property (nonatomic) unsigned int funcFlag;
@property (nonatomic) unsigned long long expiredTime;

+ (void)initialize;

@end
