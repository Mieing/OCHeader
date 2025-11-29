@class NSString, NSDictionary, RxDeferred, UIView;

@interface RTVVoipViewControllerContext : NSObject <RTVXRContextInterface>

@property (readonly, nonatomic) unsigned long long enterFrom;
@property (readonly, nonatomic) NSDictionary *trackDict;
@property (weak, nonatomic) UIView *previewView;
@property (retain, nonatomic) RxDeferred *isRenderInAdvance;
@property (readonly, nonatomic) BOOL initialNarrowVisibleState;
@property (readonly, nonatomic) BOOL initialNarrowDrawerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
