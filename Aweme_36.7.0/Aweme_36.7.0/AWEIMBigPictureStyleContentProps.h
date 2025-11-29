@protocol AWEIMBigPictureStyleTableViewCellViewModelProtocol;

@interface AWEIMBigPictureStyleContentProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) id<AWEIMBigPictureStyleTableViewCellViewModelProtocol> cellViewModel;
@property (copy, nonatomic) id /* block */ tapAction;

- (void).cxx_destruct;

@end
