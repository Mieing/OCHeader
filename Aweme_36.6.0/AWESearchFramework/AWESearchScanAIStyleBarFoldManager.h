@class NSString, AWESearchScanDataContext, UIView, AWESearchScanAIStyleFoldBar;
@protocol AWESearchScanAIStyleBarFoldManagerDelegate, AWESearchAIGCInputViewProtocol;

@interface AWESearchScanAIStyleBarFoldManager : NSObject

@property (copy, nonatomic) NSString *searchBarFoldText;
@property (nonatomic) struct CGSize { double width; double height; } foldBarOriginSize;
@property (retain, nonatomic) AWESearchScanDataContext *dataContext;
@property (nonatomic) BOOL enableShowBar;
@property (nonatomic) BOOL isFold;
@property (nonatomic) BOOL isAiStyleV2p5;
@property (weak, nonatomic) id<AWESearchScanAIStyleBarFoldManagerDelegate> delegate;
@property (weak, nonatomic) UIView *superContainer;
@property (weak, nonatomic) UIView<AWESearchAIGCInputViewProtocol> *inputView;
@property (nonatomic) BOOL v2HasShowExpandAnimation;
@property (retain, nonatomic) AWESearchScanAIStyleFoldBar *v2FoldBar;
@property (retain, nonatomic) AWESearchScanAIStyleFoldBar *v2p5FoldBar;

- (void)foldBar:(id)a0 expandAnimationCompletion:(id /* block */)a1;
- (void)foldBar:(id)a0 contractAnimationCompletion:(id /* block */)a1;
- (void)setupV2FoldBar;
- (void)showV2FoldBar;
- (void)setV2FoldBarHidden:(BOOL)a0;
- (void)setupV2p5FoldBar;
- (void)showV2p5FoldBar;
- (void)setV2p5FoldBarHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
