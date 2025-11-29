@class NSString, NSNumber;

@interface AWEDynamicPatchAdDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *creativeID;
@property (retain, nonatomic) NSNumber *groupID;
@property (retain, nonatomic) NSNumber *adID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
