@class UIImageView, IESLiveGCDTimer, UILabel, IESLiveStickerItemNewModel;
@protocol IESLiveAnchorTimeSchedulePreference;

@interface IESLiveStickerView : UIView

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *auditLabel;
@property (retain, nonatomic) id<IESLiveAnchorTimeSchedulePreference> timeNoticePref;
@property (nonatomic) struct CGSize { double width; double height; } imageOriginSize;
@property (retain, nonatomic) UIImageView *closeImage;
@property (retain, nonatomic) IESLiveGCDTimer *stickerCloseBtnTimer;
@property (retain, nonatomic) IESLiveStickerItemNewModel *model;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ closeBtnAction;

- (void)layoutSubviews;
- (double)liveWidth;
- (void)setAuditLabelHidden:(BOOL)a0;
- (void)setTextStickerContent:(id)a0;
- (struct CGSize { double x0; double x1; })resizeImage:(id)a0 originWidth:(double)a1 originHeight:(double)a2;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)refreshHidden:(BOOL)a0;
- (void)showCloseBtnInLimitTime;
- (id)getLabelFontWithModel:(id)a0;
- (void)closeaAction;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)loadViews;
- (void)updateWith:(id)a0;

@end
