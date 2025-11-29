@class NSString;
@protocol ScanTVDelegate;

@interface ScanTVHelper : MMObject <PBMessageObserverDelegate> {
    unsigned int m_uiTVDetailScene;
}

@property (retain, nonatomic) NSString *m_nsTVID;
@property (weak, nonatomic) id<ScanTVDelegate> m_delegate;

- (void)dealloc;
- (void)GetTVItemByID:(id)a0 Scene:(unsigned int)a1;
- (void)StopGet;
- (void)GetTVItemFromSVR;
- (void)HandleGetTVItemResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
