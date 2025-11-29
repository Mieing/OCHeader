@class GCTextCellLayoutInfo;

@interface GCTextCellModel : GCChatBaseCellModel

@property (nonatomic) unsigned long long textCellModelType;
@property (retain, nonatomic) GCTextCellLayoutInfo *textLayoutInfo;
@property (nonatomic) unsigned long long subType;

- (id)initWithChatroomMessage:(id)a0;
- (void)initContentModeFromChatRoomMessage:(id)a0;
- (id)contentModelFromMsgTpl:(id)a0;
- (void)onUpdateContentModel;
- (id)getContentStrFromContentModel:(id)a0;
- (Class)bindCellClass;
- (void)onChatroomMessageInitEnd;
- (void)configureWithEasyConfig:(id)a0;
- (void)handleLongPress:(id)a0;
- (id)bindTextCell;
- (BOOL)subClassHandleLongPress:(id)a0;
- (void)clearCachedLayoutInfo;
- (void).cxx_destruct;

@end
