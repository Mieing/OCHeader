@class NSString, NSMutableArray, FinderJumpInfo_StyleExtraInfo;

@interface FinderJumpInfo_CardStyle : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *image;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *buttonIcon;
@property (retain, nonatomic) NSString *buttonWording;
@property (retain, nonatomic) NSString *actionIcon;
@property (retain, nonatomic) NSString *actionWording;
@property (retain, nonatomic) NSString *buttonFontColor;
@property (retain, nonatomic) NSString *buttonBgColor;
@property (nonatomic) float heightWidthRatio;
@property (nonatomic) unsigned int buttonLengthType;
@property (nonatomic) unsigned int imageSizeType;
@property (retain, nonatomic) NSMutableArray *descs;
@property (nonatomic) unsigned int buttonPositionType;
@property (retain, nonatomic) NSString *xmlContent;
@property (retain, nonatomic) FinderJumpInfo_StyleExtraInfo *titleStyleInfo;
@property (retain, nonatomic) FinderJumpInfo_StyleExtraInfo *descStyleInfo;
@property (retain, nonatomic) FinderJumpInfo_StyleExtraInfo *infoStyleInfo;
@property (retain, nonatomic) FinderJumpInfo_StyleExtraInfo *buttonStyleInfo;
@property (retain, nonatomic) FinderJumpInfo_StyleExtraInfo *bgStyleInfo;
@property (nonatomic) unsigned int cardStyle;
@property (nonatomic) unsigned int needSelectBgColor;

+ (void)initialize;

@end
