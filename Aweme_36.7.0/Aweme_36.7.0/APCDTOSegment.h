@class NSString;

@interface APCDTOSegment : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *path;
@property (nonatomic) long long timeFrom;
@property (nonatomic) long long timeTo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
