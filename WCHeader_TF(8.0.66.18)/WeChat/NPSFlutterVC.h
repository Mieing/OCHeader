@class NSString, FinderNPSPlugin;

@interface NPSFlutterVC : MMFlutterViewController

@property (retain, nonatomic) FinderNPSPlugin *finderNPSPlugin;
@property (copy, nonatomic) NSString *tid;

- (void)onClickNPSQuestionBuffer:(id)a0 answerBuffer:(id)a1 inputText:(id)a2 mutliAnswerIDs:(id)a3;
- (void)onCloseNPS;
- (void).cxx_destruct;

@end
