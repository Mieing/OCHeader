@interface AWEBeautyTrackerHandler : NSObject

- (id)p_generateBaseParamsDictWithPublishModel:(id)a0;
- (id)trackParamsAppendNodeInfoWithParams:(id)a0 applyAllActionModels:(id)a1;
- (id)trackParamsAppendLastNodeInfoWithParams:(id)a0 lastActionModels:(id)a1;
- (id)nodeContentWithModels:(id)a0;
- (id)nodeIdContentWithModels:(id)a0;
- (id)nodeChildContentWithModels:(id)a0;
- (id)nodeChildIdContentWithModels:(id)a0;
- (id)nodeValueContentWithModels:(id)a0;
- (id)nodeChildValueContentWithModels:(id)a0;
- (void)trackCancelOrResetToastShowParamsWithType:(id)a0 repository:(id)a1 applyAllActionModels:(id)a2;
- (void)trackCancelToastClickParamsWithType:(id)a0 isCancelStatus:(BOOL)a1 repository:(id)a2 applyAllActionModels:(id)a3;
- (void)trackExitBeautifyPanelParamsWithRepositoryUUID:(id)a0 applyAllActionModels:(id)a1 lastActionModels:(id)a2 isUseEditBeautifyStatus:(BOOL)a3 isCancelStatus:(BOOL)a4 isEqualStatus:(BOOL)a5 isChangeStatus:(BOOL)a6;
- (id)trackParamsAppendLastNodeEditInfoWithParams:(id)a0 lastActionModels:(id)a1 styleId:(id)a2 styleName:(id)a3;
- (id)trackParamsEditBeautifulInfoWithParams:(id)a0 lastActionModels:(id)a1;

@end
