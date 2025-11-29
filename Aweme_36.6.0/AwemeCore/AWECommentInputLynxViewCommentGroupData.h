@class NSString, NSDictionary;

@interface AWECommentInputLynxViewCommentGroupData : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSDictionary *author;
@property (copy, nonatomic) NSDictionary *awemeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
