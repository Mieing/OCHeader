@class NSString, NSArray, NSNumber;

@interface AWEProfileLocationSegment : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSString *firstLetter;
@property (retain, nonatomic) NSString *code;
@property (retain, nonatomic) NSString *cnName;
@property (retain, nonatomic) NSString *enName;
@property (readonly, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *level;
@property (retain, nonatomic) NSArray *children;
@property (retain, nonatomic) NSArray *profileNewAreaChildren;
@property (readonly, nonatomic) BOOL hasChildren;
@property (retain, nonatomic) NSNumber *geoId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileNewAreaChildrenJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)childrenJSONTransformer;

- (void).cxx_destruct;
- (BOOL)hasChildren;

@end
