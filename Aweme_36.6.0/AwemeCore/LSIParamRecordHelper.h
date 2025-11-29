@class NSLock, NSDictionary;

@interface LSIParamRecordHelper : NSObject

@property (retain, nonatomic) NSLock *layerIdMapLock;
@property (retain, nonatomic) NSDictionary *layer_id_map;
@property (nonatomic) BOOL enableVideoInfoStatistic;

+ (id)sharedInstance;

- (void)setLayerIdMap:(id)a0;
- (void).cxx_destruct;

@end
