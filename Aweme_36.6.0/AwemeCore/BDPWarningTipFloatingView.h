@class NSString, UIImageView, UILabel, BDPUniqueID, UIButton;

@interface BDPWarningTipFloatingView : UIView

@property (copy, nonatomic) NSString *contentString;
@property (nonatomic) unsigned long long theme;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *content;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *pageCode;
@property (copy, nonatomic) id /* block */ completion;

- (void)closeBtnOnClicked;
- (id)initWithContent:(id)a0 theme:(unsigned long long)a1 uniqueID:(id)a2 pagePath:(id)a3 pageCode:(id)a4;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (void)createUI;

@end
