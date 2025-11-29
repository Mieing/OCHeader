@class UIView, IESLiveChatChannelMemberActionAccessibilityContainer, IESLiveChatChannelMemberActionModel, NSArray, IESLiveChatChannelMemberActionSheet, NSString, NSMutableArray, IESLiveImageView;

@interface IESLiveChatChannelMemberActionButton : UIView <IESLiveAutoRotateAction>

@property (retain, nonatomic) IESLiveChatChannelMemberActionAccessibilityContainer *leftContainer;
@property (retain, nonatomic) IESLiveChatChannelMemberActionAccessibilityContainer *rightContainer;
@property (retain, nonatomic) IESLiveChatChannelMemberActionModel *rightModel;
@property (retain, nonatomic) IESLiveChatChannelMemberActionModel *leftModel;
@property (retain, nonatomic) IESLiveImageView *leftImageView;
@property (retain, nonatomic) IESLiveImageView *rightImageView;
@property (retain, nonatomic) UIView *leftCustomView;
@property (retain, nonatomic) UIView *rightCustomView;
@property (retain, nonatomic) UIView *menus;
@property (retain, nonatomic) NSMutableArray *actionCells;
@property (retain, nonatomic) NSArray *models;
@property (retain, nonatomic) IESLiveChatChannelMemberActionSheet *currentSheet;
@property (nonatomic) long long type;
@property (nonatomic) BOOL disableResponse;
@property (nonatomic) BOOL hasMoreModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createActionSheet;
- (void)tapCell:(id)a0;
- (void)loadMoreActionModel;
- (void)loadLeftImage;
- (void)loadRightImage;
- (void)setupActionCells;
- (id)setupActionCellWithModel:(id)a0 index:(unsigned long long)a1;
- (void)clearMenus;
- (id)initWithType:(long long)a0 models:(id)a1;
- (void)enableResponse:(BOOL)a0;
- (void)config;
- (void).cxx_destruct;
- (void)setupViews;

@end
