@class NSString, NSMutableArray;

@interface SearchScreenCastAppMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *list;
@property (nonatomic) unsigned int isEnd;
@property (nonatomic) unsigned int nextOffset;
@property (retain, nonatomic) NSString *context;

+ (void)initialize;

@end
