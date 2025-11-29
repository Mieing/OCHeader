@class NSString;

@interface PaySubscribeInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int hasPaySubscribeEntry;
@property (retain, nonatomic) NSString *paySubscribeEntryUrl;
@property (retain, nonatomic) NSString *friendPayCountStr;

+ (void)initialize;

@end
