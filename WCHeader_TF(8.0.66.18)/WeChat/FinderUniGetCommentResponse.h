@class NSData, NSMutableArray, BaseResponse;

@interface FinderUniGetCommentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *commentInfo;
@property (nonatomic) unsigned int commentTotalcount;
@property (nonatomic) unsigned int upContinueFlag;
@property (nonatomic) unsigned int downContinueFlag;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
