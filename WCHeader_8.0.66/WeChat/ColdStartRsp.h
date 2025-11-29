@class NSMutableArray;

@interface ColdStartRsp : WXPBGeneratedMessage

@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSMutableArray *itemList;

+ (void)initialize;

@end
