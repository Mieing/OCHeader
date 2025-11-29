@class CContact, NSString, WCColorProxy, NSMutableArray;
@protocol ChatRoomMemberGridViewDelegate;

@interface NewChatRoomMemberContainView : MMUIView <NewChatRoomMemberItemViewDelegate> {
    NSMutableArray *m_arrItemViews;
    unsigned long long m_column;
    double m_margin;
    double m_fHeadWidth;
    double m_fNameSize;
}

@property (weak, nonatomic) id<ChatRoomMemberGridViewDelegate> m_delegate;
@property (nonatomic) BOOL m_bDeleteStatue;
@property (retain, nonatomic) CContact *groupContact;
@property (nonatomic) unsigned int m_scence;
@property (nonatomic) BOOL wrapItemAccessibilityElement;
@property (retain, nonatomic) WCColorProxy *colorProxy;
@property (nonatomic) BOOL isShowOpenIMTypeInGroupContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 column:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 column:(unsigned long long)a1 headWidth:(double)a2 nameSize:(double)a3;
- (void)updateColumn:(unsigned long long)a0;
- (void)addItemView:(id)a0;
- (double)getCenterX:(unsigned long long)a0 itemView:(id)a1;
- (void)layoutSubviews;
- (id)getItemAt:(unsigned int)a0;
- (BOOL)showTrackFlag:(id)a0 contact:(id)a1 trackUserNameList:(id)a2;
- (void)updateSubViewWithContacts:(id)a0 editBtn:(unsigned long long)a1 withTrackUserNameList:(id)a2 withTalkList:(id)a3;
- (id)getViewController;
- (void)openContactInfo:(id)a0;
- (void)onAddMember:(id)a0;
- (void)onDeleteMember:(id)a0;
- (void)setShowRemoveMember;
- (void)onLongPressEx:(id)a0;
- (void).cxx_destruct;

@end
