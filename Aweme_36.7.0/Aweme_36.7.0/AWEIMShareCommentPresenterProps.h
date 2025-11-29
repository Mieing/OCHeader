@class NSString;
@protocol AWEIMVideoCommentShareTableViewCellViewModelProtocol;

@interface AWEIMShareCommentPresenterProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) id<AWEIMVideoCommentShareTableViewCellViewModelProtocol> cellViewModel;
@property (copy, nonatomic) id /* block */ didTapComment;
@property (copy, nonatomic) NSString *headerString;
@property (copy, nonatomic) NSString *commentString;
@property (copy, nonatomic) NSString *invisibleString;
@property (nonatomic) BOOL contentIsAvailable;
@property (nonatomic) BOOL chatListHasBackgroundImg;

- (void).cxx_destruct;

@end
