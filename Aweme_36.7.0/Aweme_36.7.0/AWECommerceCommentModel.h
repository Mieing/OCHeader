@class NSString;

@interface AWECommerceCommentModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showCommentTag;
@property (copy, nonatomic) NSString *tagName;
@property (nonatomic) long long type;
@property (nonatomic) long long componentID;
@property (nonatomic) long long componentCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
