@class NSString;
@protocol WCShareCardNewTicketHeaderDelegate;

@interface WCShareCardNewTicketHeaderView : WCShareCardBaseHeaderView <MMWebImageViewDelegate> {
    double _viewWidth;
    id<WCShareCardNewTicketHeaderDelegate> _delegate;
    BOOL _isHaveCells;
    unsigned int _usedStoreCount;
    BOOL _shouldShowGiftView;
    NSString *_giftUsrName;
    NSString *_giftDesc;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewWidth:(double)a0 CardSourceData:(id)a1 isShareCard:(BOOL)a2 cardStatus:(int)a3 isNeedHideAccecptBtn:(BOOL)a4 delegate:(id)a5 usedStoreCount:(unsigned int)a6 isHaveCells:(BOOL)a7 shouldShowGift:(BOOL)a8 giftUsrName:(id)a9 giftDesc:(id)a10;
- (void)initView;
- (id)createTitleInfoViewWithWidth:(double)a0;
- (id)createDetailInfoViewWithWidth:(double)a0;
- (id)createLocationInfoViewWithWidth:(double)a0;
- (id)createMoreStoreView;
- (id)createHeadImgViewWithUrl:(id)a0;
- (id)createAcceptBtn;
- (id)createUnnormalStateView;
- (id)createGiftView;
- (void)openUsedStoreView;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
