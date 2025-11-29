@class NSNumber, NSString;

@interface IESECGoodsDetailPendantTiming : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *moveDistance;
@property (nonatomic) BOOL onlyShowOnce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
