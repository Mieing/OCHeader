@class MMListenMentionNotice, NSMutableArray, BaseResponse;

@interface MMListenMentionResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *mentionList;
@property (retain, nonatomic) MMListenMentionNotice *notice;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long minId;
@property (nonatomic) unsigned long long maxId;

+ (void)initialize;

@end
