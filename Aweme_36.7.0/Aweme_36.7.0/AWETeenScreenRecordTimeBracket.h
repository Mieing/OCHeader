@class NSString;

@interface AWETeenScreenRecordTimeBracket : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long startTimeSec;
@property (nonatomic) long long endTimeSec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
