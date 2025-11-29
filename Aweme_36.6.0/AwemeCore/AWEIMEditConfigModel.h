@class NSString, AWEStudioIMEditSourceModel;

@interface AWEIMEditConfigModel : NSObject

@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *entranceString;
@property (copy, nonatomic) NSString *shootWay;
@property (retain, nonatomic) AWEStudioIMEditSourceModel *source;
@property (nonatomic) BOOL enableUneditSend;
@property (nonatomic) BOOL isIMBirthday;
@property (copy, nonatomic) id /* block */ editModeFinished;
@property (copy, nonatomic) NSString *sendButtonTitle;
@property (copy, nonatomic) id /* block */ dismissCompletion;

- (void).cxx_destruct;

@end
