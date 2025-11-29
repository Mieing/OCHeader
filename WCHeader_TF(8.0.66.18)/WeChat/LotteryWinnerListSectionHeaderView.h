@class NSString, MMUILabel, MMUIButton;

@interface LotteryWinnerListSectionHeaderView : UIView

@property (retain, nonatomic) MMUILabel *winTipLabel;
@property (retain, nonatomic) MMUIButton *downLoadButton;
@property (retain, nonatomic) MMUIButton *timeOutButton;
@property (retain, nonatomic) NSString *recordUrl;
@property (nonatomic) BOOL showDownLoad;
@property (nonatomic) unsigned int isUrlExpired;
@property (copy, nonatomic) id /* block */ downLoadBlock;
@property (copy, nonatomic) id /* block */ timeOutBlock;

+ (double)headerHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutTimeOutButton;
- (void)layoutDownLoadButton;
- (void)timeOutClick;
- (void)downLoadClick;
- (void)layoutWinTipLabel;
- (void).cxx_destruct;

@end
