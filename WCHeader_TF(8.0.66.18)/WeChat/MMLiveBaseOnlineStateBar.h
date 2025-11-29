@class NSString, MMUIButton;

@interface MMLiveBaseOnlineStateBar : MMLiveBaseComponentView

@property (retain, nonatomic) MMUIButton *onlineStateButton;
@property (nonatomic) BOOL removeAvatarIcon;
@property (copy, nonatomic) id /* block */ onlineStateButtonClickedBlock;
@property (retain, nonatomic) NSString *onlineCountTitle;
@property (nonatomic) BOOL showingRunningBank;
@property (nonatomic) double maxWidth;

- (void)sizeToFits;
- (void)refreshWidgetsForFontSizeChange;
- (void).cxx_destruct;

@end
