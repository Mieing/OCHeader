@class NSString;

@interface NFCCardTipsUIViewData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardLogo;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *titleLeftIcon;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *doneBtnTips;
@property (nonatomic) int countDown;
@property (nonatomic) BOOL isDoneBtnStrongStyle;
@property (nonatomic) BOOL isShowLoading;

+ (void)initialize;

@end
