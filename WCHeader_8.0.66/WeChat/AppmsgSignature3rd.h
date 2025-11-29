@class NSString, NSMutableArray;

@interface AppmsgSignature3rd : WXPBGeneratedMessage

@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSMutableArray *nodes;
@property (retain, nonatomic) NSString *signature;

+ (void)initialize;

@end
