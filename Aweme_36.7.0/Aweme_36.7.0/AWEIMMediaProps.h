@class AWEIMMediaViewConfigModel;

@interface AWEIMMediaProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) AWEIMMediaViewConfigModel *config;
@property (copy, nonatomic) id /* block */ coverDidTapBlock;

- (void).cxx_destruct;

@end
