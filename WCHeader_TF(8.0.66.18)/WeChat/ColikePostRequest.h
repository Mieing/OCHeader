@class NSString, ColikeAppInfo;

@interface ColikePostRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSString *objectBuffer;
@property (retain, nonatomic) NSString *comment;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) ColikeAppInfo *appInfo;

+ (void)initialize;

@end
