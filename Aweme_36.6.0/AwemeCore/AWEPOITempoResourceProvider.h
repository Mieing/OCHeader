@class YYCache, NSMutableDictionary, NSString;

@interface AWEPOITempoResourceProvider : NSObject <TempoiOS.TempoResourceProvider>

@property (retain, nonatomic) YYCache *cache;
@property (retain, nonatomic) NSMutableDictionary *urlToCallbacks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
