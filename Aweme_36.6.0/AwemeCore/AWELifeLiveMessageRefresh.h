@class NSArray, NSString;

@interface AWELifeLiveMessageRefresh : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *cardIds;
@property (copy, nonatomic) NSArray *grouponIds;
@property (nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
