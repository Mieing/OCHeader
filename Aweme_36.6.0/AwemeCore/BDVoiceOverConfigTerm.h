@class NSString;

@interface BDVoiceOverConfigTerm : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *option;
@property (nonatomic) BOOL value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
