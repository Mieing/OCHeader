@class NSDictionary, NSNumber;

@interface BDARewardedVideoAdConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSDictionary *originalDict;
@property (retain, nonatomic, setter=BDARSetscaleModel:) NSNumber *scaleModel;
@property (retain, nonatomic) NSNumber *disableSessionDeactive;
@property (retain, nonatomic) NSNumber *disableSessionBeactive;
@property (retain, nonatomic) NSNumber *enableOneMore;
@property (retain, nonatomic) NSNumber *disableLoad;
@property (retain, nonatomic) NSNumber *preferredResolution;
@property (nonatomic) BOOL disableRequest;

- (id)generateSelectorWithProperty:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
