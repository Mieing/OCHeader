@class NSString, AWEAwemeModel;

@interface AWEMusicStreamingImpl.LunaListenFeedBottomView : UIView <LunaListenFeedBottomViewProtocol> {
    void /* function */ onConfirmClicked;
    void /* function */ onCancelClicked;
    void /* unknown type, empty encoding */ dismissActionBlock;
    void /* unknown type, empty encoding */ noAction;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logo;
    void /* unknown type, empty encoding */ $__lazy_storage_$_title;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subTitle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionStackView;
    void /* unknown type, empty encoding */ actionBtn;
    void /* unknown type, empty encoding */ closeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_showEntranceArrow;
    void /* unknown type, empty encoding */ $__lazy_storage_$_showCloseX;
}

@property (nonatomic, copy) id /* block */ onConfirmClicked;
@property (nonatomic, copy) id /* block */ onCancelClicked;
@property (nonatomic, readonly) NSString *subTag;
@property (nonatomic, readonly) NSString *directText;
@property (nonatomic, readonly) NSString *styleType;
@property (nonatomic, retain) AWEAwemeModel *awemeModel;
@property (nonatomic, readonly) BOOL isWeakStyle;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)updateModel:(id)a0 btnModel:(id)a1;
- (void)confirmClicked;
- (void)closeClicked;
- (void)onSingleTapRecognizer:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
