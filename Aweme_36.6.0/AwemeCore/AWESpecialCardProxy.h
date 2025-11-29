@class NSString, AWESpecialCardDelegateImpl, AWESpecialCardContextImpl;
@protocol AWESpecialCardControllerProtocol;

@interface AWESpecialCardProxy : NSObject

@property (copy, nonatomic) NSString *businessID;
@property (weak, nonatomic) id<AWESpecialCardControllerProtocol> cardController;
@property (retain, nonatomic) AWESpecialCardDelegateImpl *cardDelegate;
@property (retain, nonatomic) AWESpecialCardContextImpl *cardContext;

- (void).cxx_destruct;

@end
