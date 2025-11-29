@class FinderMentionList, NSData, BaseResponse;

@interface NewLifeGetMentionListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderMentionList *list;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
