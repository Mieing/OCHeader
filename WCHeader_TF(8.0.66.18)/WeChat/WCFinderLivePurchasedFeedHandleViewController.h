@class UIColor, NSString, UIImageView, WCFinderDataItem, MMUIButton, MMUILabel;

@interface WCFinderLivePurchasedFeedHandleViewController : MMCPUIViewController

@property (retain, nonatomic) UIImageView *tipImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) MMUIButton *ticketButton;
@property (retain, nonatomic) NSString *titleText;
@property (nonatomic) int scene;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) UIColor *imageColor;
@property (nonatomic) BOOL showTicket;

- (void)viewDidLoad;
- (void)updateDataItem:(id)a0;
- (void)updateScene:(int)a0 titleText:(id)a1;
- (void)createUI;
- (void)onReturn;
- (void)updateData;
- (void)layoutUI;
- (void)cancelButtonClick;
- (void)ticketButtonClick;
- (void).cxx_destruct;

@end
