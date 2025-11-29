@class NSString, NSArray;

@interface IESIMInfoStickerModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) long long cursor;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, copy, nonatomic) NSString *extra;
@property (readonly, nonatomic) NSArray *stickerList;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *authorName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
