@class NSNumber, NSString;

@interface IESECLiveLayoutSizeTerm : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
