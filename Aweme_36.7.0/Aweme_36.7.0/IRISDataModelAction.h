@class UITouch, NSString, IRISDataModelElement, IRISDataModelUIParser, NSDictionary, NSThread;

@interface IRISDataModelAction : IRISDataModel

@property (copy, nonatomic) NSString *behavior;
@property (weak, nonatomic) UITouch *touch;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) IRISDataModelElement *element;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *actionType;
@property (weak) IRISDataModelUIParser *parser;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSDictionary *relevance;
@property (weak, nonatomic) NSThread *thread;
@property (retain, nonatomic) NSDictionary *strictReferData;

- (id)referData;
- (BOOL)handleUserBehavior:(id)a0 withOptions:(id)a1;
- (void).cxx_destruct;

@end
