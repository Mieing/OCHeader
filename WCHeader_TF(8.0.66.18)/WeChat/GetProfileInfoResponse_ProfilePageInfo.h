@class NSString;

@interface GetProfileInfoResponse_ProfilePageInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *koubeiTitle;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *firstCoverImageUrl;
@property (retain, nonatomic) NSString *firstDocTitle;
@property (nonatomic) BOOL isVideo;
@property (retain, nonatomic) NSString *entranceAppid;
@property (retain, nonatomic) NSString *entrancePath;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) BOOL showKoubei;
@property (retain, nonatomic) NSString *extraData;
@property (retain, nonatomic) NSString *koubeiTitleTrailing;

+ (void)initialize;

@end
