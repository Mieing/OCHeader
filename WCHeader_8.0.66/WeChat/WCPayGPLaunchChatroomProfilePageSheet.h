@class NSString, CContact, MMPageSheetAdapter, UIView, ChatroomProfileView;
@protocol WCPayGPLaunchChatroomProfilePageSheetDelegate;

@interface WCPayGPLaunchChatroomProfilePageSheet : NSObject <ChatroomProfileViewLayoutDelegate, MMPageSheetAdapterDelegate>

@property (weak, nonatomic) id<WCPayGPLaunchChatroomProfilePageSheetDelegate> delegate;
@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) double minHeight;
@property (retain, nonatomic) MMPageSheetAdapter *pageAdapter;
@property (retain, nonatomic) UIView *pageSheetDetailView;
@property (retain, nonatomic) ChatroomProfileView *profileView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 chatroomContact:(id)a1 title:(id)a2 minHeight:(double)a3;
- (id)getAdapter;
- (BOOL)shouldSetupDetailViewContent;
- (void)setupDetailViewContent;
- (void)setupAdapter;
- (void)pageSheetWillAppear:(id)a0;
- (void)pageSheetDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (double)profileViewHeadLength;
- (double)profileViewLeftRightMargin;
- (double)profileViewHeadInnerMargin;
- (double)profileViewRowHeight;
- (double)profileViewNameFontSize;
- (double)profileViewCellLeftMargin;
- (void).cxx_destruct;

@end
