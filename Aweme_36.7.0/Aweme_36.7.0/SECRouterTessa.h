@class NSString, NSSet, NSDictionary;

@interface SECRouterTessa : NSObject <SECTessa, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy) NSSet *types;
@property long long versionNo;
@property (copy) NSDictionary *paramKeys;
@property (copy) NSDictionary *featuredParams;
@property (copy) NSString *destinationPage;
@property (copy) NSSet *featureTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tessaCategory;
- (id)mergeWithItem:(id)a0;
- (id)mergeTags:(id)a0 withTags:(id)a1;
- (void)updateParamKeys:(id)a0;
- (id)tearApartTags:(id)a0;
- (id)mergeTagStr:(id)a0 withTagStr:(id)a1;
- (void)addFeatureTag:(id)a0;
- (void)addFeaturedParam:(id)a0 withKeypath:(id)a1;
- (void).cxx_destruct;
- (id)type;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(id)a1;
- (id)props;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
