@class NSString, NSData;

@interface VADMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) unsigned int isFinalFullText;
@property (retain, nonatomic) NSData *extraInfo;

+ (void)initialize;

@end
