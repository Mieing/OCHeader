@class NSString, NSMutableArray;

@interface DigestInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *item;
@property (retain, nonatomic) NSString *strategyInfo;
@property (nonatomic) unsigned int flag;

+ (void)initialize;

@end
