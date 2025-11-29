@class NSString, NSMutableArray;

@interface FinderThemeLiveStreamAppearance : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *backgroundImgUrl;
@property (retain, nonatomic) NSString *mainTitle;
@property (retain, nonatomic) NSMutableArray *mainTitleColor;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSMutableArray *subTitleColor;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSMutableArray *backgroundColor;
@property (retain, nonatomic) NSMutableArray *navbarBgColor;
@property (retain, nonatomic) NSMutableArray *navbarTextColor;
@property (nonatomic) unsigned int containerType;

+ (void)initialize;

@end
