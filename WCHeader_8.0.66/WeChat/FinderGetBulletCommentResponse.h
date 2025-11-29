@class NSString, NSMutableArray, BaseResponse;

@interface FinderGetBulletCommentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *commentList;
@property (retain, nonatomic) NSString *lastBuffer;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic) unsigned long long endTimestamp;

+ (void)initialize;

@end
