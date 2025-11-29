@protocol WCOutGetProductListCgiDelegate;

@interface WCOutGetProductListCgi : NSObject <PBMessageObserverDelegate>

@property (nonatomic) unsigned int eventID;
@property (weak, nonatomic) id<WCOutGetProductListCgiDelegate> delegate;

+ (id)cgiWithDelegate:(id)a0;

- (void)dealloc;
- (void)start:(id)a0 reqCurrency:(id)a1;
- (void)fail;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
