@class NSString, FinderJumpInfo_AccountStyle, NSData, FinderJumpInfo_FinderCrossPlatformCardStyle_MediaInfo;

@interface FinderJumpInfo_FinderCrossPlatformCardStyle : WXPBGeneratedMessage

@property (nonatomic) unsigned int closeButtonAppearTime;
@property (nonatomic) unsigned int showTime;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *buttonWording;
@property (retain, nonatomic) NSString *buttonBgColor;
@property (retain, nonatomic) NSString *buttonFontColor;
@property (retain, nonatomic) NSString *finishButtonBgColor;
@property (retain, nonatomic) NSString *finishButtonFontColor;
@property (retain, nonatomic) FinderJumpInfo_AccountStyle *accountStyle;
@property (retain, nonatomic) FinderJumpInfo_FinderCrossPlatformCardStyle_MediaInfo *media;
@property (nonatomic) unsigned int changeToFinishButtonTime;
@property (retain, nonatomic) NSData *finderObjectBytes;
@property (retain, nonatomic) NSString *finderObjectJsonStr;
@property (retain, nonatomic) NSString *enterText;
@property (retain, nonatomic) NSString *bottomLeftText;
@property (nonatomic) unsigned int appearExceedStayTimeS;
@property (nonatomic) unsigned int appearNotDragProgressS;
@property (nonatomic) unsigned int appearExceedRemainingVideoS;
@property (nonatomic) unsigned int appearExceedPlayTimeMs;

+ (void)initialize;

@end
