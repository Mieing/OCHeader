@class NSString, NSMutableArray, NSArray;

@interface WCADQuestionExp : MMObject

@property (retain, nonatomic) NSString *nsExpId;
@property (retain, nonatomic) NSMutableArray *aryQuestions;
@property (retain, nonatomic) NSArray *firstStepOrder;

- (void).cxx_destruct;

@end
