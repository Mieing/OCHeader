@class NSString, NSArray;
@protocol ChatroomProfileViewLayoutDelegate;

@interface ChatroomProfileView : MMTableViewInfo <ChatRoomMemberGridViewDelegate> {
    NSArray *m_arrContacts;
}

@property (weak, nonatomic) id<ChatroomProfileViewLayoutDelegate> layoutDelegate;
@property (nonatomic) BOOL wrapItemAccessibilityElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContactList:(id)a0;
- (void)updateContactList:(id)a0 delegate:(id)a1;
- (void)initMemberView;
- (void)makeMemListCell:(id)a0 CellInfo:(id)a1;
- (void)makeMemListSection:(id)a0;
- (unsigned long long)getMemberViewColumnCount;
- (unsigned long long)getMemberViewRowCount;
- (double)getMemberViewHeight;
- (double)getProfileViewHeadLength;
- (double)getProfileViewLeftRightMargin;
- (double)getProfileViewHeadInnerMargin;
- (double)getProfileViewRowHeight;
- (double)getProfileViewNameFontSize;
- (double)getProfileViewCellLeftMargin;
- (double)getMemberItemViewWitdh;
- (void)openContactInfo:(id)a0;
- (void).cxx_destruct;

@end
