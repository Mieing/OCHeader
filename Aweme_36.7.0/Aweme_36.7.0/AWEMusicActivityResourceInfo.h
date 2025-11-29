@class NSString;

@interface AWEMusicActivityResourceInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *configurationId;
@property (copy, nonatomic) NSString *configurationType;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *icon;
@property (nonatomic) BOOL skipFrequencyControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
