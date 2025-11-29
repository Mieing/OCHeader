@class NSString, AWEIMPushConditionChecker;

@interface AWEIMPushInfoFilter : NSObject

@property (retain, nonatomic) AWEIMPushConditionChecker *checker;
@property (copy, nonatomic) NSString *scene;

- (id)initWithConditions:(id)a0 scene:(id)a1;
- (id)filterInfo:(id)a0 withContext:(id)a1;
- (void).cxx_destruct;

@end
