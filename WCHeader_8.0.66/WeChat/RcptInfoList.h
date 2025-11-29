@class NSMutableArray;

@interface RcptInfoList : WXPBGeneratedMessage

@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *rcptinfolist;
@property (nonatomic) unsigned int timestamp;

+ (void)initialize;

@end
