@class NSString, NSMutableArray;

@interface ConnectInfoAddr : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *ip;
@property (retain, nonatomic) NSMutableArray *port;

+ (void)initialize;

@end
