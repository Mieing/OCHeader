@class FinderCommentTitleBarInfo, ProductCommentInfo, BaseResponse;

@interface FinderAsyncGetCommentInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderCommentTitleBarInfo *titleBarInfo;
@property (nonatomic) unsigned long long requestId;
@property (retain, nonatomic) ProductCommentInfo *productInfo;

+ (void)initialize;

@end
