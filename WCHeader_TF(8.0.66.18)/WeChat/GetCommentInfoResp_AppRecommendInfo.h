@class NSString;

@interface GetCommentInfoResp_AppRecommendInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *recommend;
@property (nonatomic) unsigned long long commentId;
@property (retain, nonatomic) NSString *headImg;
@property (nonatomic) unsigned int useruin;

+ (void)initialize;

@end
