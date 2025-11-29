@class UIView, MMUIButton, NSArray, ChatRoomHistoryShareStat, UIImageView, MMUILabel, CContact, BaseMsgContentLogicController;

@interface WCSharedMsgSelectViewController : MMUIViewController {
    UIView *_headerView;
    UIImageView *_downArrow;
    MMUILabel *_tipsLabel;
    MMUIButton *_resetButton;
    MMUILabel *_reachMaxLabel;
    UIView *_divLine;
    MMUILabel *_debugLabel;
    unsigned long long _multiSelectMsgTotalSize;
    unsigned long long _multiSelectMsgTextTotalSize;
}

@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) NSArray *initialSelectedMsgs;
@property (retain, nonatomic) BaseMsgContentLogicController *logicController;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (nonatomic) unsigned int maxSelectCount;
@property (nonatomic) unsigned long long maxSelectBytes;
@property (readonly, nonatomic) ChatRoomHistoryShareStat *stat;
@property (nonatomic) BOOL bShowGuideTips;

- (id)initWithContact:(id)a0 selectedMsgs:(id)a1 stat:(id)a2;
- (void)showScrollTips;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)buildHeaderView;
- (void)layoutHeaderView;
- (void)updateInset;
- (void)buildMsgPreviewView;
- (void)registerMultiSelectCallBack:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)getTipsInfo;
- (id)getDebugInfo;
- (void)onDone:(id)a0;
- (void)onCancel;
- (void)onResetSelect:(id)a0;
- (void).cxx_destruct;

@end
