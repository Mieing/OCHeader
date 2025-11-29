@class NSString, NSArray, NSObject;

@interface BTFeedbackPanelInitParams : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *confirmBtnWording;
@property (retain, nonatomic) NSArray *feedbackReasonArr;
@property (retain, nonatomic) NSObject *contextInfo;

- (void).cxx_destruct;

@end
