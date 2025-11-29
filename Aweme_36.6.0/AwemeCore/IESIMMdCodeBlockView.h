@class NSString, AWEIMGradientView, IESIMMdCodeBlockViewLayoutCache, IESIMMdCodeBlockViewRenderModel, UILabel, UIView, UIButton;
@protocol IESIMMdCodeBlockViewDelegate;

@interface IESIMMdCodeBlockView : UIView <IESIMMdViewProtocol>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *expandButton;
@property (retain, nonatomic) UIButton *imCopyButton;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) AWEIMGradientView *gradientShadow;
@property (retain, nonatomic) UIButton *fullContentButton;
@property (retain, nonatomic) IESIMMdCodeBlockViewRenderModel *renderModel;
@property (retain, nonatomic) IESIMMdCodeBlockViewLayoutCache *layoutCache;
@property (weak, nonatomic) id<IESIMMdCodeBlockViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createDefaultView;
+ (id)calculateMarkdownCodeBlockHeightWithRenderModel:(id)a0;

- (void)makeConstraints;
- (void)updateCodeBlockWithRenderModel:(id)a0 layoutCache:(id)a1;
- (void)p_clickCopy;
- (void)p_clickFullContent;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;

@end
