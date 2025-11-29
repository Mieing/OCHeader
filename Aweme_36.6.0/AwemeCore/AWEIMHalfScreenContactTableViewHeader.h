@class AWEIMHalfScreenContactTableViewHeaderContext, UIViewController, AWEIMHalfScreenSearchView, UIView, AWEIMHalfScreenContactTableViewHeaderCell;

@interface AWEIMHalfScreenContactTableViewHeader : UIView

@property (retain, nonatomic) AWEIMHalfScreenContactTableViewHeaderContext *context;
@property (retain, nonatomic) AWEIMHalfScreenSearchView *searchView;
@property (retain, nonatomic) AWEIMHalfScreenContactTableViewHeaderCell *currentGroupCell;
@property (retain, nonatomic) AWEIMHalfScreenContactTableViewHeaderCell *createGroupCell;
@property (retain, nonatomic) AWEIMHalfScreenContactTableViewHeaderCell *manageFansGroupCell;
@property (retain, nonatomic) AWEIMHalfScreenContactTableViewHeaderCell *faceToFaceGroupCell;
@property (retain, nonatomic) AWEIMHalfScreenContactTableViewHeaderCell *wechatCell;
@property (retain, nonatomic) AWEIMHalfScreenContactTableViewHeaderCell *qqCell;
@property (retain, nonatomic) AWEIMHalfScreenContactTableViewHeaderCell *inviteWechatCell;
@property (retain, nonatomic) UIViewController *tokenVC;
@property (retain, nonatomic) UIView *tokenView;
@property (nonatomic) long long cellNumber;

- (BOOL)__isContactSearchEntryPermanentTop;
- (double)nextEntranceHeight;
- (BOOL)__itemIsEnableWithItem:(unsigned long long)a0;
- (double)externalShareEntranceHeight;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
