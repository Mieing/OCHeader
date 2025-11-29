@class NSString, DAVLokiResourceProtocol_OC;

@interface ACCLokiURS : ACCURS

@property (retain, nonatomic) DAVLokiResourceProtocol_OC *davLokiResource;
@property (retain, nonatomic) NSString *effectID;
@property (retain, nonatomic) NSString *resourceID;
@property (retain, nonatomic) NSString *panel;

+ (id)getSourceFrom;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithResourceID:(id)a0 panel:(id)a1;
- (id)initWithParseModel:(id)a0;
- (void)buildDavLokiResource;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEffectID:(id)a0;
- (id)getParameters;

@end
