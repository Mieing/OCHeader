@class NSString, AWEURLModel;

@interface AWEIMShareTrendMessageProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) AWEURLModel *urlModel;
@property (copy, nonatomic) NSString *shootSameLableText;
@property (copy, nonatomic) id /* block */ tapAction;

- (void).cxx_destruct;

@end
