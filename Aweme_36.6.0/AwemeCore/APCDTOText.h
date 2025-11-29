@class NSString, NSArray;

@interface APCDTOText : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSArray *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)appendBodyString:(id)a0;
- (id)appendBodyWithFormat:(id)a0;
- (id)addUserMention:(id /* block */)a0;
- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;
- (id)addHashtag:(id)a0;

@end
