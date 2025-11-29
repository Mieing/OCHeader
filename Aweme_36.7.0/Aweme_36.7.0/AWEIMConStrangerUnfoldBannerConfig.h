@class NSString;

@interface AWEIMConStrangerUnfoldBannerConfig : NSObject

@property (nonatomic) BOOL hasBackgroundImg;
@property (retain, nonatomic) NSString *titleStr;
@property (retain, nonatomic) NSString *btnTitleStr;
@property (copy, nonatomic) id /* block */ didClickConfirmBlock;
@property (copy, nonatomic) id /* block */ didClickCloseBlock;

- (void).cxx_destruct;

@end
