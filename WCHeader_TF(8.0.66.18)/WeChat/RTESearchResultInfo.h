@class NSMutableArray;

@interface RTESearchResultInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long location;
@property (nonatomic) BOOL isFromDesc;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *subSearchResultInfos;

+ (void)initialize;

@end
