@class NSString;

@interface SimpleExpressInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *wxaAppid;
@property (retain, nonatomic) NSString *wxaPath;
@property (retain, nonatomic) NSString *h5Path;
@property (retain, nonatomic) NSString *stateStr;

+ (void)initialize;

@end
