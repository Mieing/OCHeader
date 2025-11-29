@class NSArray, NSString;

@interface APCDTORichText : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *hashtagList;
@property (nonatomic) BOOL enableSetShowInPostList;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *signatureContent;
@property (copy, nonatomic) NSString *shootSameEffectId;
@property (nonatomic) BOOL isText2image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
