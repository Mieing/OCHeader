@class ACCAIGCUnifyLoadingViewConfig, NSString, UIView;
@protocol ACCAIGCUnifyLoadingViewProtocol;

@interface ACCAIUnifyLoadingViewOperate : NSObject <ACCAIUnifyLoadingViewOperateProtocol>

@property (retain, nonatomic) UIView<ACCAIGCUnifyLoadingViewProtocol> *unifyLoadingView;
@property (retain, nonatomic) ACCAIGCUnifyLoadingViewConfig *config;
@property (nonatomic) unsigned long long viewStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLoadingViewSceneType:(long long)a0;
- (void)showUnifyLoading;
- (void)startUnifyLoadingProgress;
- (void)updateShowImage:(id)a0 exceptFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)buildUnifyLoadingUseConfig:(id)a0 delegate:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withScene:(unsigned long long)a3;
- (void)updateLoadingViewWithAIGCProcessResultModel:(id)a0 querySceneType:(long long)a1;
- (void)updateLoadingViewType:(long long)a0 errMsg:(id)a1;
- (void)updateUnifyLoadingShowOrHide:(BOOL)a0;
- (void)updateLoadingViewSubtitleWith:(long long)a0 type:(long long)a1;
- (void)removeUnifyLoadingWithAnimation:(BOOL)a0;
- (void)cancelUnifyLoadingTask;
- (void)resetUnifyLoadingProgress;
- (void)reStartUnifyLoadingProgress;
- (void)destroyUnifyLoading;
- (void).cxx_destruct;
- (id)init;

@end
