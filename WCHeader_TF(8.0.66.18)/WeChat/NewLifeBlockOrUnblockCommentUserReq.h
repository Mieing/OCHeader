@class NSString, FinderCommentInfo;

@interface NewLifeBlockOrUnblockCommentUserReq : WXPBGeneratedMessage

@property (retain, nonatomic) FinderCommentInfo *comment;
@property (nonatomic) unsigned long long feedId;
@property (retain, nonatomic) NSString *nonceId;

+ (void)initialize;

@end
