@class NSString;

@interface AWECommentAICloneDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *prompts;
@property (nonatomic) BOOL currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
