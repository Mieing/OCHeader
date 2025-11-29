@class NSMutableDictionary, NSDictionary, IESECBlenderContext, UIView, NSString;

@interface IESECBlenderViewManager : NSObject <IESECBlenderViewMangerProtocol>

@property (retain, nonatomic) NSMutableDictionary *cacheRegisterMap;
@property (retain, nonatomic) UIView *rootView;
@property (copy, nonatomic) NSDictionary *viewMap;
@property (retain, nonatomic) UIView *mainUrlView;
@property (weak, nonatomic) IESECBlenderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (void)bindCustomView:(id)a0 toRegion:(id)a1;
- (void)bindCacheView;
- (void)bindMainUrlView;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
