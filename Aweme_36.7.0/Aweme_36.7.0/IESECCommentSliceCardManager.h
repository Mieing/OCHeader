@class NSDictionary, NSString, UIView;
@protocol IESECCommentSliceManagerDelegate, IESECSliceXInstanceInterface;

@interface IESECCommentSliceCardManager : NSObject <IESECSliceXEventForwardDelegate>

@property (retain, nonatomic) id<IESECSliceXInstanceInterface> instance;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) BOOL hasFirstUpdateSize;
@property (nonatomic) BOOL showFoldBtn;
@property (nonatomic) float containerHeight;
@property (nonatomic) BOOL isPadSplitting;
@property (nonatomic) struct CGSize { double width; double height; } updatedSize;
@property (copy, nonatomic) NSDictionary *lastedData;
@property (copy, nonatomic) NSString *identifyName;
@property (copy, nonatomic) id /* block */ didClickExpandCell;
@property (copy, nonatomic) id /* block */ didClickAdaptedExpandCell;
@property (copy, nonatomic) id /* block */ didClickTag;
@property (copy, nonatomic) id /* block */ exposureTagModuleAction;
@property (copy, nonatomic) id /* block */ exposureTagCellAction;
@property (copy, nonatomic) id /* block */ exposureExpandCellAction;
@property (copy, nonatomic) id /* block */ refreshCell;
@property (weak, nonatomic) id<IESECCommentSliceManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerSliceXEvent:(id)a0;
- (id)initWithIdentify:(id)a0 isPadSplitting:(BOOL)a1;
- (void)loadResource:(id)a0 data:(id)a1;
- (BOOL)isExpand:(id)a0;
- (void)initData:(id)a0 config:(id)a1;
- (void)triggerSliceXEventOfTagModule:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)_loadData:(id)a0;
- (void)loadData:(id)a0;
- (double)containerWidth;
- (void)loadResource:(id)a0;

@end
