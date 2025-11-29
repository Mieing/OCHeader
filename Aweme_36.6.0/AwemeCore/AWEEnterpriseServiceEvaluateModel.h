@class NSString, NSArray, NSDictionary;

@interface AWEEnterpriseServiceEvaluateModel : NSObject

@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *committedTitle;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *levelButtonID;
@property (copy, nonatomic) NSArray *descriptions;
@property (copy, nonatomic) NSDictionary *feedbacks;
@property (copy, nonatomic) NSString *submitTitle;
@property (copy, nonatomic) NSString *apiString;
@property (nonatomic) long long timeout;
@property (copy, nonatomic) NSString *timeoutToast;

- (id)createFeedbackWithCustomerServiceModule:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
