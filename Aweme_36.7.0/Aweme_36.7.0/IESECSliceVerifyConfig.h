@class NSArray, NSString;

@interface IESECSliceVerifyConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *rules;
@property (copy, nonatomic) NSString *btmId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
