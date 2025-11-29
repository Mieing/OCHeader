@class NSString, IESLiveShareContentModel, IESLiveIMShareContactListConfig, HTSLiveRoom;
@protocol IESLiveIMShareContactListDelegate, AWEIMShareContactListProtocol;

@interface AWELiveIMShareContactListInstance : NSObject <AWEIMShareContactListDelegate, AWEIMShareAdditionTextViewUIDelegate, IESLiveIMShareContactListProtocol>

@property (weak, nonatomic) id<IESLiveIMShareContactListDelegate> delegate;
@property (retain, nonatomic) IESLiveIMShareContactListConfig *config;
@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (retain, nonatomic) IESLiveShareContentModel *contentModel;
@property (retain, nonatomic) id<AWEIMShareContactListProtocol> contactList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleTapOutsideOfPanel;
- (void)shareContactList:(id)a0 hideContainerListWithCompletion:(id /* block */)a1 atScene:(unsigned long long)a2;
- (BOOL)shareContactList:(id)a0 didSelectWithShareModel:(id)a1 atIndex:(long long)a2 currentSelectState:(BOOL)a3;
- (void)shareContactList:(id)a0 didSelectRecentShareWithShareModels:(id)a1 atIndex:(long long)a2;
- (id)createAdditionTextAndAppendToViewHierarchyWithShareContactList:(id)a0;
- (void)shareContactList:(id)a0 additionTextViewDismissed:(id)a1;
- (void)textView:(id)a0 bottomViewDidShow:(BOOL)a1 keyboardHeight:(double)a2 additionTextViewNormalHeight:(double)a3 animateSheetHeight:(BOOL)a4;
- (void)textView:(id)a0 didChangeMinHeight:(double)a1 keyboardHeight:(double)a2;
- (void)createContactList;
- (id)convertShareModel:(id)a0;
- (id)initWithRoomModel:(id)a0 contentModel:(id)a1 config:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (double)height;
- (id)listView;

@end
