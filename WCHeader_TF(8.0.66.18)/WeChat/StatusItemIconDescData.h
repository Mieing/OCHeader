@class NSString;

@interface StatusItemIconDescData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *iconDesc;
@property (nonatomic) BOOL isRead;
@property (nonatomic) BOOL useOriginColor;
@property (retain, nonatomic) NSString *bigIconUrl;

+ (void)initialize;

@end
