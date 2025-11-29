@protocol IESLivePKModel;

@interface IESLivePKFeedbackViewModelFactory : NSObject

@property (retain, nonatomic) id<IESLivePKModel> pkmodel;

+ (id)pkFeedbackViewModelWithDIContext:(id)a0;

- (id)createPKFeedbackModel;
- (id)p_trackVendorNameWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
