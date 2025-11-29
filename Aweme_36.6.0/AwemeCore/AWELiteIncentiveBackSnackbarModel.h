@class NSString, AWELiteIncentiveBackSnackbarDataModel;

@interface AWELiteIncentiveBackSnackbarModel : AWELiteBaseApiModel

@property (copy, nonatomic) NSString *guideStyle;
@property (copy, nonatomic) AWELiteIncentiveBackSnackbarDataModel *snackbar;

+ (id)snackbarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
