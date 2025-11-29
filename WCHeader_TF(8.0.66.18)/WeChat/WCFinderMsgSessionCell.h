@class NSString, WCFinderMsgSessionCellViewModel, WCFinderMsgSessionNicknameTailView;

@interface WCFinderMsgSessionCell : MMBaseSessionTableViewCell <WCFinderMsgSessionNicknameTailViewDelegate>

@property (retain, nonatomic) WCFinderMsgSessionNicknameTailView *tailView;
@property (retain, nonatomic) WCFinderMsgSessionCellViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (void)updateWithSessionCellData:(id)a0;
- (id)genMessageListTimeStringByUInt:(unsigned int)a0;
- (id)GetNickNameTailView;
- (void)onTailViewNeedLayout;
- (void).cxx_destruct;

@end
