@class AWEIMOneCardView, NSString;

@interface AWEIMOneCardMessageViewModel : AWEIMMessageViewModel <AWEIMOneCardViewDelegate, AWEIMOneCardMessageViewModelProtocol>

@property (retain, nonatomic) AWEIMOneCardView *oneCardView;
@property (nonatomic) long long startBusiness;
@property (nonatomic) BOOL hasAddNotice;
@property (nonatomic) BOOL isNeedCover;
@property (nonatomic) BOOL shouldDeleteCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getConversationInfoWithParams:(id)a0 completion:(id /* block */)a1;
- (void)getTimestampStartBusinessWithParams:(id)a0 completion:(id /* block */)a1;
- (void)setupWithMessage:(id)a0;
- (id)getOneCardViewToDisplay;
- (void)updateOneCardCache;
- (id)getCoverImageToDisplay;
- (void)recordStartBusinessTime;
- (void)__didRequestOneCardInfoWithNotification:(id)a0;
- (void)handleDeleteOneCardMessageCellNotification:(id)a0;
- (BOOL)shouldResetOneCardView;
- (void)__tryAddNotice;
- (id)__getCoverImageKey;
- (void)__shotOneCardView;
- (void)freedOneCardView;
- (void)__saveCoverImage:(id)a0;
- (void)updateHeight:(id)a0 Width:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
