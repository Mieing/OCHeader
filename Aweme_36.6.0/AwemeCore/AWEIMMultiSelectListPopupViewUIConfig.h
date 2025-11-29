@class UIFont;

@interface AWEIMMultiSelectListPopupViewUIConfig : NSObject

@property (nonatomic) BOOL enableMaskViewTapGes;
@property (nonatomic) BOOL enablePopupViewPanGes;
@property (nonatomic) BOOL considerMaxPopupViewHeight;
@property (nonatomic) BOOL enableConfirmBtnOpt;
@property (nonatomic) double maxExposedCellCount;
@property (nonatomic) double listCellHeight;
@property (nonatomic) double confirmBtnCornerRadius;
@property (nonatomic) double listCellAvatarWidth;
@property (nonatomic) double listCellTagHeight;
@property (retain, nonatomic) UIFont *listCellTagFont;

- (void).cxx_destruct;
- (id)init;

@end
