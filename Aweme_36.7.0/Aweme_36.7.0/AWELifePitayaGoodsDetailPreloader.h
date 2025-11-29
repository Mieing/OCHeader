@class NSArray, NSString;

@interface AWELifePitayaGoodsDetailPreloader : NSObject <AWELifeCommonPreloaderProtocol>

@property (readonly, copy, nonatomic) NSArray *requiredTrackerKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestWithParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)isInputValidWithParams:(id)a0;
- (id)getTrackParams:(id)a0;

@end
