@class NSMutableArray, UILabel, UIView;

@interface MAOfflineActionSheetView : UIView {
    int _tag;
}

@property (weak, nonatomic) MAOfflineActionSheetView *actionSheet;
@property (weak, nonatomic) UIView *sheetView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (nonatomic) BOOL isShowing;

- (id)initTitle:(id)a0 cancelTitle:(id)a1 otherTitles:(id)a2;
- (void)showActionSheetWithBlock:(id /* block */)a0;
- (void)coverClick;
- (void)setupBtnWithTitle:(id)a0 titleColor:(id)a1;
- (id)createImageWithColor:(id)a0;
- (void)sheetBtnClick:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;

@end
