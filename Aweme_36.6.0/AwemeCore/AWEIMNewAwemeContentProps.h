@class NSString, AWEURLModel;

@interface AWEIMNewAwemeContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) NSString *displayTitle;
@property (copy, nonatomic) NSString *displayDetail;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) AWEURLModel *originCoverURL;
@property (nonatomic) BOOL showLoadingView;
@property (nonatomic) BOOL showPlayButtonView;
@property (copy, nonatomic) id /* block */ tapActionBlock;

- (void).cxx_destruct;

@end
