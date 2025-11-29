@class NSArray, NSString;

@interface AWEIMBulletContainerClientDataLiveInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *visibleGroupIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)configDataWithMessage:(id)a0;
- (void).cxx_destruct;

@end
