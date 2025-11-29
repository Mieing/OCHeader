@class WCFinderDataItem, NSData;

@interface WCFinderGetLiveRewardGiftListCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int pullScene;
@property (nonatomic) BOOL chooseGift;

- (id)initWithFinderTaskId:(id)a0 liveCookies:(id)a1 pullScene:(unsigned int)a2 chooseGift:(BOOL)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
