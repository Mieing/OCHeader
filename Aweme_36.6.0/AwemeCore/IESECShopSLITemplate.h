@class NSString;

@interface IESECShopSLITemplate : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) double predictHeight;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templateWith:(id)a0 url:(id)a1 version:(id)a2;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
