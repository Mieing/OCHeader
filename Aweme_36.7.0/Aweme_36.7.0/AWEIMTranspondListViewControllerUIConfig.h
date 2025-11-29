@class NSMutableAttributedString;

@interface AWEIMTranspondListViewControllerUIConfig : NSObject

@property (nonatomic) BOOL shieldInnerPush;
@property (nonatomic) BOOL hideCloseButton;
@property (nonatomic) BOOL hideLineView;
@property (nonatomic) BOOL disableResetContentOffsetWhenViewWillAppear;
@property (retain, nonatomic) NSMutableAttributedString *defaultTitleAttributedText;

- (void).cxx_destruct;

@end
