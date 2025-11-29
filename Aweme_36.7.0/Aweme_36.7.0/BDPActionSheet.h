@class BDPActionSheetItemModel, NSString, NSArray, UIImage, BDPActionSheetViewController, BDPActionSheetPresentViewController, UIViewController, UIColor;
@protocol BDPActionSheetDelegate;

@interface BDPActionSheet : NSObject <BDPActionSheetDelegate>

@property (retain, nonatomic) BDPActionSheetViewController *mainViewController;
@property (weak, nonatomic) BDPActionSheetPresentViewController *presentVC;
@property (copy, nonatomic) NSArray *models;
@property (weak, nonatomic) UIViewController *parentVC;
@property (retain, nonatomic) UIColor *maskViewColor;
@property (nonatomic) BOOL tapMaskToDismiss;
@property (weak, nonatomic) id<BDPActionSheetDelegate> delegate;
@property BOOL noticeOnCompeletion;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long sheetAlignment;
@property (retain, nonatomic) BDPActionSheetItemModel *cancelItemModel;
@property (nonatomic) BOOL adaptBottomSafeArea;
@property (nonatomic) BOOL selectItemShouldDismiss;
@property (retain, nonatomic) UIImage *titleIconImage;
@property (copy, nonatomic) id /* block */ willDismissBlock;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (nonatomic) unsigned long long presentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultActionSheetWithHostVC:(id)a0 andType:(long long)a1 andTitle:(id)a2 andSubtitle:(id)a3 andModels:(id)a4 andDelegate:(id)a5 enlargeType:(unsigned long long)a6;
+ (id)defaultActionSheetWithHostVC:(id)a0 andType:(long long)a1 andTitle:(id)a2 andSubtitle:(id)a3 andModels:(id)a4 andDelegate:(id)a5;
+ (double)defaultPadSheetWidthOnWidth:(double)a0;
+ (void)registerGlobalConfig:(id)a0;
+ (id)defaultActionSheetWithHostVC:(id)a0 andTitle:(id)a1 andSubtitle:(id)a2 andModels:(id)a3 andDelegate:(id)a4;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)actionSheetDidClickCancelButton:(id)a0;
- (void)actionSheetDidClickMaskArea:(id)a0;
- (id)initWithTitle:(id)a0 andSubtitle:(id)a1 andModels:(id)a2 andDelegate:(id)a3;
- (id)initWithType:(long long)a0 andTitle:(id)a1 andSubtitle:(id)a2 andModels:(id)a3 andDelegate:(id)a4;
- (void)updateSheetCancelItemTitle:(id)a0 withSubtitle:(id)a1;
- (void)updateSheetWidth:(double)a0 withBottomOffset:(double)a1;
- (id)initWithType:(long long)a0 andTitle:(id)a1 andSubtitle:(id)a2 andModels:(id)a3 andDelegate:(id)a4 enlargeType:(unsigned long long)a5;
- (void)updateSheetLeftPadding:(double)a0 withRightPadding:(double)a1 withBottomOffset:(double)a2;
- (void)updateSheetWidth:(double)a0;
- (void)updateSheetLeftPadding:(double)a0 withRightPadding:(double)a1;
- (void)dismissWithReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)showOnViewController:(id)a0 completion:(id /* block */)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dismiss:(id /* block */)a0;
- (void)showOnViewController:(id)a0;

@end
