@class NSString;

@interface SnsPostOperationFields : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *shareUrlOriginal;
@property (retain, nonatomic) NSString *shareUrlOpen;
@property (retain, nonatomic) NSString *jsAppId;
@property (nonatomic) unsigned int contactTagCount;
@property (nonatomic) unsigned int tempUserCount;

+ (void)initialize;

@end
