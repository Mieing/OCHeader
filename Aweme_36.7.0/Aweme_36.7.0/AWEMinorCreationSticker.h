@class NSString, NSArray;

@interface AWEMinorCreationSticker : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *resourceID;
@property (copy, nonatomic) NSString *effectID;
@property (nonatomic) unsigned long long creationStickerType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonDesc;
@property (copy, nonatomic) NSArray *authorList;
@property (nonatomic) long long restAuthorsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
