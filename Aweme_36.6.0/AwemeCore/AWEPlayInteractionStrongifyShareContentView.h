@class UIStackView, NSArray, NSDictionary, AWEAwemeModel, UIView, NSString;
@protocol AWEIMShareModelProtocol, AWEPlayInteractionBottomButtonViewDelegateProtocol;

@interface AWEPlayInteractionStrongifyShareContentView : UIView <AWEPlayInteractionBottomButtonViewProtocol>

@property (retain, nonatomic) UIView *subSingleContentView;
@property (retain, nonatomic) UIView *subMultiContentView;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) UIStackView *avatarStackView;
@property (retain, nonatomic) NSDictionary *incentiveChatTrackParams;
@property (nonatomic) BOOL isFromGoldShareToIMEntrance;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> userModel;
@property (nonatomic) BOOL isOnline;
@property (nonatomic) BOOL largeFont;
@property (weak, nonatomic) Class largeFontAdaptUtil;
@property (copy, nonatomic) id /* block */ didClickAvatarAction;
@property (copy, nonatomic) id /* block */ didClickShareLabelAction;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (void)layoutSubviews;
- (id)aAWELiteUGSocialModuleAdapter;
- (id)createSingleContentViewIfNeeded;
- (id)createMultiContentViewIfNeeded;
- (void)p_updateActiveUserState;
- (id)createGoldIconView;
- (id)createGoldLabelView;
- (void)didClickShareLabel;
- (id)initWithShareModels:(id)a0 shareViewType:(unsigned long long)a1 awemeModel:(id)a2;
- (void)updateWithShareModels:(id)a0 shareViewType:(unsigned long long)a1 awemeModel:(id)a2;
- (void)changeBgColorToRed;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)createContentView;

@end
