@class NSMutableArray;

@interface DirectConnSet : WXPBGeneratedMessage

@property (nonatomic) int directConnCnt;
@property (retain, nonatomic) NSMutableArray *directConns;

+ (void)initialize;

@end
