@class NSString, NSDictionary, NSDate;

@interface CJPayJSBTrace : NSObject

@property (copy, nonatomic) NSString *jsbName;
@property (copy, nonatomic) NSString *invokeId;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *actionBeginTime;
@property (retain, nonatomic) NSDate *actionEndTime;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) BOOL ended;
@property (retain, nonatomic) NSDictionary *extraCategories;
@property (retain, nonatomic) NSDictionary *extraMetric;

+ (id)beginWithName:(id)a0 extraCategories:(id)a1 extraMetrics:(id)a2;
+ (id)beginWithName:(id)a0;
+ (BOOL)isEnabled;

- (void)endWithURL:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2 success:(BOOL)a3;
- (void)markUserActionBegin;
- (void)markUserActionEnd;
- (void)addExtraMetric:(id)a0 forKey:(id)a1;
- (void)addExtraCategory:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
