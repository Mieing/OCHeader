@class NSString;

@interface SportRecord : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *appShortName;
@property (retain, nonatomic) NSString *sportName;
@property (nonatomic) unsigned int sportNum;
@property (retain, nonatomic) NSString *sportUnit;
@property (retain, nonatomic) NSString *sportUrl;
@property (retain, nonatomic) NSString *appIconUrl;
@property (nonatomic) unsigned int recordSoureType;
@property (retain, nonatomic) NSString *stringSportNum;

+ (void)initialize;

- (id)olympic2024Info;
- (id)olympic2024RankTitle;
- (id)olympic2024RankIconUrl;
- (id)olympic2024DetailTitle;
- (id)olympic2024DetailIconUrl;
- (id)olympic2024Appid;
- (id)olympic2024Page;
- (id)olympic2024Query;
- (id)olympic2024MinVersion;
- (unsigned int)sportType;
- (id)description;
- (id)displaySportNum;

@end
