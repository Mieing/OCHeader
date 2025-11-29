@class WCCardTipItem;

@interface WCCardTipController : MMObject {
    WCCardTipItem *_wcCardTip;
}

- (id)init;
- (void)loadTipStg;
- (void)setWCCardTip:(id)a0;
- (void)clearWCCardTip;
- (id)getCardTip;
- (id)GetPathOfWCCardTipStorage;
- (void)saveWCCardTipStg;
- (void).cxx_destruct;

@end
