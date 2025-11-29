@class NSNumber, NSString;

@interface CSJAdClientBiddingHandle : NSObject <CSJAdClientBiddingProtocol> {
    BOOL _isSendWin;
    BOOL _isSendLoss;
    BOOL isGetURLInfo;
}

@property (copy, nonatomic) NSNumber *userAuctionPrice;
@property (copy, nonatomic) NSString *winUrl;
@property (copy, nonatomic) NSString *lossUrl;
@property (copy, nonatomic) NSString *serverPrice;
@property (nonatomic) unsigned long long biddingType;
@property (copy, nonatomic) id /* block */ getMediaExtBlock;
@property (copy, nonatomic) id /* block */ getMaterialExtBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)p_isClientBidding;
- (id)p_checkUrl:(id)a0;
- (void)p_getInfo;
- (id)getAuctionPrice;
- (void)win:(id)a0;
- (void)loss:(id)a0 lossReason:(id)a1 winBidder:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)setPrice:(id)a0;

@end
