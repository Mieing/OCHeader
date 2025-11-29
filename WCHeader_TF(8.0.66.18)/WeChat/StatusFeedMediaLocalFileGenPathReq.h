@class NSString, StatusMedia;

@interface StatusFeedMediaLocalFileGenPathReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *feedOwnerUsername;
@property (nonatomic) long long feedCreateTimeMs;
@property (nonatomic) int index;
@property (nonatomic) int localType;
@property (retain, nonatomic) StatusMedia *statusMedia;

+ (void)initialize;

@end
