@class NSString;

@interface ACCURS : MTLModel <MTLJSONSerializing, NSCoding>

@property (retain, nonatomic) NSString *localPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSourceFrom;
+ (BOOL)encodeParameters;
+ (id)JSONKeyPathsByPropertyKey;

- (id)buildURS;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getParameters;

@end
