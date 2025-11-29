@class NSString, MMListenCommentInfo;

@interface MMListenCommentInfoResponse_Result : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) MMListenCommentInfo *commentInfo;

+ (void)initialize;

@end
