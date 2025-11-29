@class WCCardLayoutStorage;
@protocol WCCardLayoutMgrDelegate;

@interface WCCardLayoutMgr : MMObject <PBMessageObserverDelegate> {
    WCCardLayoutStorage *_layoutStg;
    unsigned int _waitLocationTime;
    id<WCCardLayoutMgrDelegate> _delegate;
    BOOL _bGettingLayout;
}

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)loadLayoutStg;
- (id)getLayoutBuff;
- (id)getExpiringList;
- (id)getMemberCardList;
- (id)getNearByList;
- (id)getRecentList;
- (id)getLabelList;
- (id)getFirstList;
- (unsigned int)getTopScene;
- (void)clearLayoutRedDot;
- (BOOL)hasLayoutRedDot;
- (id)layoutTip;
- (BOOL)isGettingLayout;
- (id)getEntrySubTitle;
- (id)getCardsPkgElementList;
- (id)getMyCardPackageSvrRetEntryList;
- (unsigned int)getHomePageCardNum;
- (void)getCardLayoutByCGI:(id)a0 Scene:(unsigned int)a1;
- (id)GetPathOfWCCardLayoutStorage;
- (void)saveLayoutStg;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)logHomePageList;
- (void).cxx_destruct;

@end
