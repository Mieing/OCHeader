@class NSString;

@interface WCADQuestionStatItem : MMObject

@property (retain, nonatomic) NSString *nsPublishId;
@property (retain, nonatomic) NSString *nsExpId;
@property (retain, nonatomic) NSString *nsUxInfo;
@property (retain, nonatomic) NSString *nsActionResult;
@property (nonatomic) unsigned int uiBeginTime;
@property (nonatomic) unsigned int uiEndTime;

- (void).cxx_destruct;

@end
