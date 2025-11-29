@class NSMutableArray;
@protocol AWESpecialCardDelegateCallProtocol;

@interface AWESpecialCardDispatchManager : NSObject

@property (retain, nonatomic) NSMutableArray *cardProxyArray;
@property (weak, nonatomic) id<AWESpecialCardDelegateCallProtocol> dispatchController;

- (void)registerCardController:(id)a0;
- (id)getCardProxyWithBusinessID:(id)a0;
- (void).cxx_destruct;

@end
