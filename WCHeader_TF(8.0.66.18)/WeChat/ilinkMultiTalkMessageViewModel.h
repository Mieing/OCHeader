@class NSMutableArray;

@interface ilinkMultiTalkMessageViewModel : BaseMessageViewModel

@property (nonatomic) long long ilinkMsgType;
@property (nonatomic) unsigned long long roomID;
@property (readonly, nonatomic) NSMutableArray *allTalkedMembers;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (void)initIlinkMultiTalkNodeViewData;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
