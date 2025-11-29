@class NSString, NSMutableDictionary, MMTimer, NSDate, NSMutableArray;
@protocol RTEAttachmentViewProviderDelegate;

@interface RTEAttachmentViewProvider : MMObject <RTEAttachmentViewDelegate> {
    NSMutableDictionary *m_registerViewDictionary;
    NSMutableDictionary *m_activeAttachmentViews;
    NSMutableDictionary *m_reuseAttachmentViews;
    NSMutableArray *m_pendingReuseAttachmentViews;
    MMTimer *m_clearTimer;
    NSDate *m_lastResuseDate;
}

@property (weak, nonatomic) id<RTEAttachmentViewProviderDelegate> delegate;
@property (nonatomic) Class defaultViewClass;
@property (nonatomic) unsigned long long colorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerAttachmentViewClass:(Class)a0 forAttachmentType:(unsigned int)a1;
- (id)activeAttachmentViewsForType:(unsigned int)a0;
- (id)reuseAttachmentViewsForType:(unsigned int)a0;
- (id)getViewForAttribute:(id)a0;
- (id)getViewForAttachment:(id)a0;
- (void)invalidViewForAttachment:(id)a0;
- (void)didRemoveAttachmentView:(id)a0;
- (void)updateContentOffset:(struct CGPoint { double x0; double x1; })a0 inSuperView:(id)a1;
- (id)getAllAttachmentViewOfType:(unsigned int)a0;
- (void)reLayoutAllAttachmentView;
- (void)tryReuseAttachmentView:(id)a0;
- (void)clearPendingReuseView;
- (void).cxx_destruct;

@end
