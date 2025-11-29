@class NSString, NSDictionary;

@interface AWECommentInputLynxViewTrackParams : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
