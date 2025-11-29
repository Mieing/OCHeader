@class NSString, NSData;

@interface ForwardWxworkMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *climsgid;
@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSData *xml;

+ (void)initialize;

@end
