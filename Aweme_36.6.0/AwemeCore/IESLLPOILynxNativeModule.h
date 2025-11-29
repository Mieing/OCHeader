@class NSString, NSDictionary;

@interface IESLLPOILynxNativeModule : NSObject <LynxModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (long long)publishEvent:(id)a0;
- (id)constData;
- (id)splitText:(id)a0 byMaxWidth:(double)a1 fontSize:(double)a2 fontScale:(double)a3;
- (double)getTextWidthWithText:(id)a0 fontSize:(double)a1 fontScale:(double)a2;
- (double)getTextWidthByParams:(id)a0;
- (id)spiltTextByParams:(id)a0;
- (id)setPoiStorageItems:(id)a0 completion:(id /* block */)a1;
- (id)getPoiStorageItems:(id)a0;
- (id)operatePoiLocationEmbeddedTip:(id)a0;
- (void)addObserverOfEmbededTip;
- (void)didEmbededTipBecomeActiveNotification:(id)a0;
- (void)dealloc;
- (id)fetchSessionInfo:(id)a0;

@end
