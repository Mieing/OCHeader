@class NSString;

@interface AWEUserActivityModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *contentDescription;
@property (nonatomic) BOOL eligibleForHandoff;
@property (nonatomic) BOOL eligibleForSearch;
@property (nonatomic) BOOL eligibleForPrediction;
@property (copy, nonatomic) NSString *scheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
