@class NSString, AWEIMPushConditionChecker;

@interface AWEIMPushInfoSeparator : NSObject

@property (retain, nonatomic) AWEIMPushConditionChecker *checker;
@property (copy, nonatomic) NSString *scene;

- (id)initWithConditions:(id)a0 scene:(id)a1;
- (id)separateInfo:(id)a0 withContext:(id)a1;
- (void).cxx_destruct;

@end
