@class NSString;

@interface AffFinderContactInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headImageUrl;
@property (nonatomic) BOOL isFollow;

+ (void)initialize;

@end
