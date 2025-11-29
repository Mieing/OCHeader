@class UIView, NSString, DUXTextTag, AWEGeneralSearchModel, UIImageView, NSDictionary, AWESearchEventDispather, UILabel;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchCommentInfoComponent : AWESearchComponent <AWESearchCommentInfoComponentProtocol, AWESearchComponentBusinessProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) DUXTextTag *tagView;
@property (retain, nonatomic) UILabel *commentTextLabel;
@property (retain, nonatomic) UIImageView *commentImageView;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (retain, nonatomic) AWEGeneralSearchModel *bindedModel;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;

+ (long long)maxNumberOfLines;
+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })p_calculateComponentSize:(double)a0 withModel:(id)a1;
+ (id)attributedTextWithTextString:(id)a0;
+ (id)commentTextAttributesForHeightCalculate:(BOOL)a0;
+ (id)commentFont;

- (void)updateWithReferString:(id)a0;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)updateWithChunkModel:(id)a0;
- (void)addTapGesture;
- (id)fetchSearchParams;
- (id)p_context;
- (void)sendClickEvent;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)commentTapped:(id)a0;
- (void)sendFeedEnterEvent;
- (id)fetchFeedDetailExtraInfo;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)setupUI;

@end
