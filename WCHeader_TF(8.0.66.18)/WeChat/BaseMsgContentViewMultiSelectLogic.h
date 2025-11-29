@class NSMutableDictionary, CMessageWrap, MultiSelectMsgTipView, OrderedDictionary, NSMutableArray;
@protocol BaseMsgContentViewMultiSelectLogicDelegate;

@interface BaseMsgContentViewMultiSelectLogic : MMObject {
    BOOL m_isFirstSelectMsg;
}

@property (retain, nonatomic) OrderedDictionary *dicSelectedMsgLocalID;
@property (nonatomic) BOOL multiSelectMsgIsTopFlag;
@property (nonatomic) BOOL bForbidMultiSelect;
@property (retain, nonatomic) MultiSelectMsgTipView *multiSelectMsgTipBtn;
@property (retain, nonatomic) NSMutableDictionary *dicMultiSelectMsg;
@property (retain, nonatomic) CMessageWrap *firstSelectMessageWrap;
@property (retain, nonatomic) CMessageWrap *lastSelectMessageWrap;
@property (nonatomic) unsigned int clickSelectMsgTipBtnCount;
@property (retain, nonatomic) NSMutableArray *arrClickSelectMsgAutoSelected;
@property (weak, nonatomic) id<BaseMsgContentViewMultiSelectLogicDelegate> delegate;

- (id)init;
- (void)initData;
- (void)handleMultiSelectTipButtonWithScrollDirection:(BOOL)a0;
- (void)handleMultiSelectTipButtonScrollEnd;
- (void)resetMultiSelectMsgTipBtnTopLocation;
- (void)resetMultiSelectMsgTipBtnBottomLocation;
- (void)updateMultiSelectMsgTipBtnWithIsDisableStatus;
- (id)getTopMessagesInVisibleCells;
- (id)getLastMessagesInVisibleCells;
- (id)getLastMessagesInVisibleCells:(BOOL)a0;
- (BOOL)checkHadTopDirectionMessages;
- (BOOL)checkHadBottomDirectionMessages;
- (id)getMessageWrapInVisibleCellWithMesLocalID:(id)a0;
- (void)updateFirstAndLastSelectMessageWrap:(id)a0 isAddSelect:(BOOL)a1;
- (void)didClickMultiSelectMsgTipViewAutoSelect;
- (BOOL)checkNodeDataIsvalid:(id)a0;
- (BOOL)checkMultiSelectedInfoCanAddMsg:(id)a0;
- (void)handleMultiSelectedInfoAddMsg:(id)a0 nsMsgLocalId:(id)a1;
- (void)updateMultiSelectMsgButton;
- (void)handleRecordSelectedMsg:(id)a0;
- (void)recordCanSelectedMsgWithScrollDirection:(BOOL)a0;
- (void)recordCanSelectedMsgInMoreOperate:(id)a0;
- (void)calculateSelectedMsgToMoreWithTopMessageWrap:(id)a0 bottomMessageWrap:(id)a1;
- (void)resetForbidMultiSelectAndMultiSelectMsgTipBtn;
- (BOOL)isMsg:(id)a0 greaterThan:(id)a1;
- (BOOL)isMsg:(id)a0 lessThan:(id)a1;
- (BOOL)isMultiSelected:(id)a0;
- (id)getMsgTableView;
- (id)getViewController;
- (id)getArrSelectMsgLocalID;
- (id)getMultiSelectView;
- (id)getArrMessageNodeData;
- (id /* block */)getMultiSelectedChecker;
- (id /* block */)getMultiSelectedHandler;
- (id)getRoomHistoryStat;
- (double)getMultiSelectMsgTipBtnTopInTopLocation;
- (double)getMultiSelectMsgTipBtnBottomLocation;
- (unsigned int)getMultiSelectMaxCount;
- (void)reloadTableData;
- (BOOL)isInMultiSelectMsg;
- (void)setHistroyMessageForbidMultiSelect:(BOOL)a0;
- (void).cxx_destruct;

@end
