@class CBaseContact, NSString, CMessageWrap;
@protocol ChatViewModelDelegate;

@interface BaseChatViewModel : NSObject <MessageComponentMultiSceneSupport> {
    double m_layoutWidth;
    double m_cachedHeight;
    id m_cellView;
}

@property (weak, nonatomic) id cellView;
@property (readonly, nonatomic) CMessageWrap *messageWrap;
@property (nonatomic) unsigned long long modelType;
@property (nonatomic) unsigned long long splitPosition;
@property (retain, nonatomic) CBaseContact *chatContact;
@property (nonatomic) double createTime;
@property (weak, nonatomic) id<ChatViewModelDelegate> delegate;
@property (nonatomic) BOOL shouldReCreate;
@property (retain, nonatomic) NSString *chatSplitWording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChatContact:(id)a0;
- (void)updateChatContact:(id)a0;
- (void)updateChatContactAdminStatus:(BOOL)a0;
- (id)cellViewClassName;
- (id)cellIdentifier;
- (double)sectionHeight;
- (BOOL)shouldLayoutIfNeeded;
- (double)rowHeight;
- (struct CGSize { double x0; double x1; })measure:(struct CGSize { double x0; double x1; })a0;
- (void)resetLayoutCache;
- (void)updateLayouts;
- (void)updateLayoutsWithTryScroll:(BOOL)a0 ReloadAll:(BOOL)a1;
- (void)updateLayoutsWithoutReload;
- (long long)numberOfRowsInSection;
- (id)cellDataForRow:(unsigned long long)a0;
- (BOOL)isHeadPart;
- (BOOL)isTailPart;
- (BOOL)isDisableEditMode;
- (BOOL)isUseLightStyle;
- (BOOL)isChatroomInDarkBkg;
- (BOOL)isShowInSubScene;
- (double)chatViewControllerWidth;
- (double)chatViewControllerShortSideLength;
- (void).cxx_destruct;

@end
