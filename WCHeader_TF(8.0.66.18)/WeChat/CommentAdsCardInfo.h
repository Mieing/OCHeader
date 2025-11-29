@class NSString, NSMutableArray, FinderColor;

@interface CommentAdsCardInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSMutableArray *imageInfos;
@property (retain, nonatomic) NSMutableArray *videoInfos;
@property (retain, nonatomic) NSString *buttonWording;
@property (retain, nonatomic) NSString *bgColor;
@property (retain, nonatomic) FinderColor *newBgColor;
@property (retain, nonatomic) FinderColor *buttonBgColor;
@property (retain, nonatomic) FinderColor *buttonFontColor;

+ (void)initialize;

@end
