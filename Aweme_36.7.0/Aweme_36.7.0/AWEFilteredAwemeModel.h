@class NSString;

@interface AWEFilteredAwemeModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) long long filteredReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
