@class NSString;

@interface AWECommentEvaluationTitleElementConfig : NSObject

@property (copy, nonatomic) NSString *titlePlaceholder;
@property (copy, nonatomic) NSString *titleMinCountToast;
@property (copy, nonatomic) NSString *titleMaxCountToast;
@property (nonatomic) long long titleMinCount;
@property (nonatomic) long long titleMaxCount;
@property (nonatomic) BOOL titleDisableEdit;

- (void).cxx_destruct;

@end
