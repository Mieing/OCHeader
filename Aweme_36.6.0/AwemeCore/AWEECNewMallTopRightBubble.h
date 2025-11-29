@class NSString;

@interface AWEECNewMallTopRightBubble : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) long long duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
