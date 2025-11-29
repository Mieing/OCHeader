@class NSString, NSDictionary;

@interface IESECWinLynxCardConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lynxUrl;
@property (nonatomic) double predictHeight;
@property (nonatomic) double fixedHeight;
@property (copy, nonatomic) NSString *calHeightSingle;
@property (copy, nonatomic) NSString *calHeightDouble;
@property (nonatomic) double spanRatio;
@property (nonatomic) BOOL formModifiable;
@property (retain, nonatomic) NSDictionary *edge;
@property (nonatomic) BOOL followLastCard;
@property (nonatomic) double rootHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
