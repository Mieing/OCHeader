@class NSString;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@interface AWEFeedChallengeCardController : AWEBaseController <AWESpecialCardControllerProtocol>

@property (nonatomic) BOOL isTransTapClickTracked;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
