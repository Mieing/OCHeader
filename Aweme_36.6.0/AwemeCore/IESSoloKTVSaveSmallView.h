@class IESLiveCircleProgressView, IESSoloKTVDraftMainModel, NSProgress, IESSoloKTVSaveSmallViewModel, UILabel, UIView, NSString;

@interface IESSoloKTVSaveSmallView : UIView <IESSoloKTVSmallWindowViewProtocol>

@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) IESLiveCircleProgressView *progressView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) IESSoloKTVDraftMainModel *draftModel;
@property (retain, nonatomic) IESSoloKTVSaveSmallViewModel *viewModel;
@property (copy, nonatomic) id /* block */ destoryAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickClose;
- (id)initWithViewModel:(id)a0 backgroundView:(id)a1 progress:(id)a2 isEdit:(BOOL)a3;
- (void)setupEditSmallView;
- (void)setupPreviewSmallView;
- (id)creatDialogConfigWithTaskType:(long long)a0;
- (id)smallWindowManager;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)updateProgress:(double)a0;
- (void)addObservers;

@end
