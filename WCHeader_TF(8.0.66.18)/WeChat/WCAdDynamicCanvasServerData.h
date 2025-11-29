@class NSString, WCAdCanvasLoadParams;

@interface WCAdDynamicCanvasServerData : NSObject <PBCoding>

@property (retain, nonatomic) NSString *adCanvasXml;
@property (retain, nonatomic) NSString *dynamicCanvasData;
@property (nonatomic) unsigned long long cacheTime;
@property (retain, nonatomic) WCAdCanvasLoadParams *loadParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_adCanvasXml;
+ (void)PBArrayAdd_dynamicCanvasData;
+ (void)PBArrayAdd_cacheTime;
+ (void)initialize;
+ (id)fromPBCodingBuffer:(id)a0;

@end
