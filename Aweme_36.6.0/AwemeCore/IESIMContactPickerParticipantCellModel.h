@class NSString, AWEIMGroupParticipantBizInfoPeerViewModel, NSAttributedString, NSIndexPath;
@protocol IESIMGroupParticipantTagContainerModelProtocol;

@interface IESIMContactPickerParticipantCellModel : IESIMContactPickerContentCellModel <IESIMContactPickerContentCellModelProtocol>

@property (retain, nonatomic) AWEIMGroupParticipantBizInfoPeerViewModel *peerVM;
@property (retain, nonatomic) id<IESIMGroupParticipantTagContainerModelProtocol> participantTagModel;
@property (nonatomic) BOOL hideOfficialAccountLabel;
@property (nonatomic) BOOL hideRoleTag;
@property (nonatomic) BOOL showFansTags;
@property (nonatomic) BOOL shouldShowLiveFansSubscriptionDate;
@property (nonatomic) BOOL showActiveTag;
@property (nonatomic) BOOL isUseNewTag;
@property (nonatomic) BOOL activeTagCanDisplay;
@property (copy, nonatomic) id /* block */ activeTagTapAction;
@property (readonly, copy, nonatomic) NSString *cellReuseIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ didSelectBlock;
@property (copy, nonatomic) id /* block */ didClickRightButtonBlock;
@property (nonatomic) BOOL disableSelect;
@property (readonly, nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSAttributedString *middleDescAttr;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) id rawData;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBindingWithConversation:(id)a0;
- (void).cxx_destruct;

@end
