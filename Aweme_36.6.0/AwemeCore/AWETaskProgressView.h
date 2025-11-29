@class DUXActionSheet, NSString, UIImageView, MBCircularProgressBarView, UIView, UILabel, AWEPublishBaseTask;

@interface AWETaskProgressView : UIView <DUXActionSheetDelegate, AWETaskProgressViewProtocol>

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) MBCircularProgressBarView *circleProgressBar;
@property (retain, nonatomic) UILabel *autoRetryPublishFailLabel;
@property (retain, nonatomic) AWEPublishBaseTask *task;
@property (readonly, nonatomic) double cornerRadius;
@property (retain, nonatomic) DUXActionSheet *actionSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)generateDraftCover:(id)a0 completion:(id /* block */)a1;

- (void)beginPublish;
- (void)configPublishTask:(id)a0;
- (void)updateSubviewHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
