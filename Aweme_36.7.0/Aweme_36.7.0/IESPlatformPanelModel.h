@class NSString, NSArray;

@interface IESPlatformPanelModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *iconURLs;
@property (copy, nonatomic) NSString *iconURI;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *tagsUpdatedTimeStamp;
@property (readonly, copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isArray:(id)a0 equalToArray:(id)a1;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
