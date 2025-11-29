@class NSString;

@interface FinderCommentRelatedFeedInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long feedid;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) double pictureCutRatio;
@property (retain, nonatomic) NSString *nonceId;

+ (void)initialize;

@end
