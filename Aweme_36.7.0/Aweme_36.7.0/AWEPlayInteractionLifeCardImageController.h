@class NSArray, NSMutableDictionary, BDXBridgeEventSubscriber;

@interface AWEPlayInteractionLifeCardImageController : AWEPlayInteractionBaseController

@property (copy, nonatomic) NSArray *albumImages;
@property (retain, nonatomic) NSMutableDictionary *imageShowDic;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;

- (double)getLeftElementHeight;
- (double)getBottomElementHeight;
- (BOOL)isRichAwemeManuallySlide:(unsigned long long)a0;
- (void)bindLynxMessage;
- (id)getMethodSourceStr:(unsigned long long)a0 index:(long long)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)willDisplay;

@end
