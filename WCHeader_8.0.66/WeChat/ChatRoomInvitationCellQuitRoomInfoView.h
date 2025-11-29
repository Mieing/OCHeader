@class NSString, CContact, UIImageView, RichTextView;
@protocol ChatRoomInvitationCellQuitRoomInfoViewDelegate;

@interface ChatRoomInvitationCellQuitRoomInfoView : MMUIView <ILinkEventExt>

@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) NSString *quitRoomInfo;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) RichTextView *quitRoomInfoLabel;
@property (weak, nonatomic) id<ChatRoomInvitationCellQuitRoomInfoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 quitRoomInfo:(id)a1;
- (void)initView;
- (id)getQuitRoomInfoIconImage;
- (id)getQuitRoomInfoLabelTextColor;
- (id)getQuitRoomInfoTitleWithDisplayName:(id)a0 quitRoomInfo:(id)a1 sex:(unsigned int)a2;
- (void)setupLayout;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
