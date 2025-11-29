@class NSString, NSDictionary, NSSet;

@interface IESFeatureConfig : NSObject

@property (retain, nonatomic) NSString *subTypeStr;
@property (nonatomic) BOOL enableCloudScore;
@property (nonatomic) BOOL enable;
@property (nonatomic) long long range;
@property (nonatomic) long long range_app;
@property (nonatomic) BOOL excludeThis;
@property (nonatomic) BOOL isReal;
@property (retain, nonatomic) NSDictionary *extraConfigDict;
@property (retain, nonatomic) NSSet *subtype;
@property (retain, nonatomic) NSString *strategyName;
@property (retain, nonatomic) NSDictionary *JSONDict;

- (BOOL)containSubType:(id)a0;
- (id)parseSubtype:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSONDict:(id)a0;

@end
