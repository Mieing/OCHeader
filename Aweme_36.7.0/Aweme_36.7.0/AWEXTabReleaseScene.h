@class NSString;

@interface AWEXTabReleaseScene : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long releaseStrategy;
@property (nonatomic) BOOL enableMemoryWarningNotification;
@property (copy, nonatomic) NSString *memoryLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
