@class NSArray, NSString;

@interface AWEInteractionMessageData : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long version;
@property (copy, nonatomic) NSArray *messageList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
