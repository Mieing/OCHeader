@class NSString, NSMutableArray;

@interface MMListenFormatDesc : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) NSMutableArray *values;

+ (void)initialize;

@end
