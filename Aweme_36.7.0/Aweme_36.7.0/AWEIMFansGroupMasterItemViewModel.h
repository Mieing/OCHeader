@class AWEIMMessageConversation, NSString, AWEIMFansGroupModel, AWEIMPublicGroupManagerPageEditViewModel;
@protocol IESIMConversationProtocol;

@interface AWEIMFansGroupMasterItemViewModel : IESIMBaseApiModel

@property (retain, nonatomic) NSString *groupMemberDesc;
@property (retain, nonatomic) NSString *entryLimitDesc;
@property (retain, nonatomic) NSString *infoDesc;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) double labelMaxW;
@property (nonatomic) double labelTopMargin;
@property (nonatomic) BOOL dragIndicatorViewHidden;
@property (nonatomic) BOOL displayStateButtonHidden;
@property (nonatomic) BOOL displayStateButtonSelected;
@property (retain, nonatomic) AWEIMFansGroupModel *model;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL disableGroupStateButton;
@property (readonly, weak, nonatomic) AWEIMPublicGroupManagerPageEditViewModel *pageEditViewModel;

- (void)removeKVO;
- (void)addKVO;
- (void)calculateLayoutInfo;
- (void)rebindConversation;
- (void)__addGroupKVO;
- (id)__textLayoutWithText:(id)a0 font:(id)a1 maxRowCount:(unsigned long long)a2;
- (void)__refreshDragIndicatorHidden;
- (id)initWithModel:(id)a0 pageEditViewModel:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
