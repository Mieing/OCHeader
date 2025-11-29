@class NSString, NSDictionary;

@interface AWEInteractionMessage : MTLModel <MTLJSONSerializing, AWEInteractionMessageProtocol>

@property (nonatomic) long long cmd;
@property (copy, nonatomic) NSString *res;
@property (nonatomic) long long act;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheDictionaryFromMessage:(id)a0;
+ (id)messageFromCacheDictionary:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
