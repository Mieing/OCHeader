@class FinderEventBaseResponse, NSData, NSMutableArray;

@interface RefreshCommentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) FinderEventBaseResponse *baseResp;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *comments;

+ (void)initialize;

@end
