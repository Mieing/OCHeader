@class NSMutableArray;
@protocol FavSecurityDelegate;

@interface FavSecurityLogic : MMObject <PBMessageObserverDelegate> {
    NSMutableArray *_infoArray;
    unsigned int _curCheckingId;
}

@property (weak, nonatomic) id<FavSecurityDelegate> delegate;

- (id)init;
- (void)cancelCheck:(unsigned int)a0;
- (void)checkSecurity:(id)a0;
- (void)runCheck;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)HandleResp:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
