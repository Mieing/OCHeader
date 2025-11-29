@class NSData, FinderEventBaseRequest;

@interface RefreshCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) FinderEventBaseRequest *baseReq;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
