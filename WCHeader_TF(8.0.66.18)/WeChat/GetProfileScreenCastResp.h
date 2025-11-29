@class NSString, NSMutableArray;

@interface GetProfileScreenCastResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *list;
@property (nonatomic) unsigned int isEnd;
@property (nonatomic) unsigned int nextSeq;
@property (retain, nonatomic) NSString *context;

+ (void)initialize;

@end
