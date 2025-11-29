@class NSString, CardMiniAppInfo;

@interface CardHomePageTopCell : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardTopCellIcon;
@property (retain, nonatomic) NSString *cardTopCellTitle;
@property (retain, nonatomic) NSString *cardTopCellWording;
@property (nonatomic) int cardTopCellOpType;
@property (retain, nonatomic) NSString *cardTopCellJumpUrl;
@property (retain, nonatomic) CardMiniAppInfo *cardTopCellMiniAppInfo;
@property (retain, nonatomic) NSString *cardTopCellNativeUrl;
@property (nonatomic) unsigned int isShowRedDot;
@property (nonatomic) unsigned int isShowNew;

+ (void)initialize;

@end
