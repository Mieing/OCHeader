@class NSString, UIImage;
@protocol AWEIMShareModelProtocol, AWEIMCommentSectionViewModelProtocol;

@interface AWEIMCommentShareSectionItemModel : NSObject

@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (nonatomic) BOOL hasMore;
@property (weak, nonatomic) id<AWEIMCommentSectionViewModelProtocol> longPressViewModel;
@property (nonatomic) unsigned long long shareState;
@property (copy, nonatomic) NSString *imIconImageName;
@property (nonatomic) BOOL isMoreCell;
@property (copy, nonatomic) NSString *shareType;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL isDisable;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void).cxx_destruct;

@end
