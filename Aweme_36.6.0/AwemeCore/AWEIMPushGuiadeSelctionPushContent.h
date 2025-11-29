@class NSString;

@interface AWEIMPushGuiadeSelctionPushContent : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *pushTitle;
@property (copy, nonatomic) NSString *pushContent;
@property (copy, nonatomic) NSString *avatarURLStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
