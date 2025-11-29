@class NSArray, NSString;

@interface AWEDTORecordSecurityData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *extractFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
