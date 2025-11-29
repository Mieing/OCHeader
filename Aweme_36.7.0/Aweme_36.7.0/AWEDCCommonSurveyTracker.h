@class NSDictionary;

@interface AWEDCCommonSurveyTracker : NSObject

@property (copy, nonatomic) NSDictionary *logExtra;

- (void)trackShowWithModel:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)trackQuitWithModel:(id)a0 params:(id)a1;
- (void)trackLoadResult:(BOOL)a0 model:(id)a1 errorCode:(long long)a2 errorMsg:(id)a3;
- (void)trackToastShowWithModel:(id)a0 params:(id)a1;
- (void)trackWithEvent:(id)a0 model:(id)a1 params:(id)a2;
- (id)commonParams:(id)a0;
- (id)initWithLogExtra:(id)a0;
- (void)trackLoadResult:(BOOL)a0 model:(id)a1 errorCode:(long long)a2 errorMsg:(id)a3 extraInfo:(id)a4;
- (void)trackShowWithModel:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2 extraInfo:(id)a3;
- (void)trackInsetResult:(BOOL)a0 model:(id)a1 errorCode:(long long)a2 errorMsg:(id)a3 extraInfo:(id)a4;
- (void).cxx_destruct;

@end
