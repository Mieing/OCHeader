@class LSIMEvaluationInfo, LSIMEvaluationResult, LSIMThrottle;

@interface LSIMMessageEvaluateCellVM : LSIMChatDetailBaseCellVM

@property (retain, nonatomic) LSIMThrottle *throttle;
@property (retain, nonatomic) LSIMEvaluationInfo *info;
@property (retain, nonatomic) LSIMEvaluationResult *messageResult;
@property (retain, nonatomic) LSIMEvaluationResult *commitResult;
@property (nonatomic) BOOL disableEvaluation;
@property (nonatomic) BOOL showedExpiration;
@property (retain, nonatomic) LSIMEvaluationResult *lastResult;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL needRequestImmediately;
@property (copy, nonatomic) id /* block */ requestImmediatelyBlock;
@property (nonatomic) BOOL isReported;

- (void)cellWillDisplay;
- (void)handleMessage;
- (void)originExtDictDidUpdated;
- (void)evaluationExpired;
- (void)evaluationResultDidChanged:(id)a0 isChangingMainRate:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleOriginExt;
- (void)sendEvaluationSafelyWithChangingMainRate:(BOOL)a0 completion:(id /* block */)a1;
- (void)sendEvaluationWithChangingMainRate:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isSystemMessage;

@end
