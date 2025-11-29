@class NSArray, NSAttributedString;

@interface AWEIMShareNoticeMessageContentProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) NSArray *coverUrlList;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *detailTitle;
@property (copy, nonatomic) id /* block */ tapAction;

- (void).cxx_destruct;

@end
