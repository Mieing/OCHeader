@class NSString, FinderLiveMsgBoxInfo_AlertInfo, FinderJumpInfo;

@interface FinderLiveMsgBoxInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned int showPlacement;
@property (nonatomic) unsigned int uiStyle;
@property (retain, nonatomic) NSString *shortContent;
@property (retain, nonatomic) FinderLiveMsgBoxInfo_AlertInfo *alertInfo;
@property (retain, nonatomic) FinderJumpInfo *appealPage;
@property (retain, nonatomic) NSString *reportInfo;

+ (void)initialize;

@end
