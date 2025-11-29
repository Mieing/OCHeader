@class NSString, NSMutableArray;

@interface FinderLiveCardHighlightTag : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSMutableArray *wordingColor;
@property (retain, nonatomic) NSMutableArray *backgroundColor;
@property (retain, nonatomic) NSString *backgroundImgUrl;
@property (nonatomic) unsigned int backgroundMode;
@property (nonatomic) BOOL isDisable;
@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *backgroundIconUrl;

+ (void)initialize;

@end
