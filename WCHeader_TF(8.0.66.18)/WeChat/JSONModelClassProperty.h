@class NSString, NSMutableDictionary;

@interface JSONModelClassProperty : NSObject

@property (nonatomic) BOOL isIndex;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) Class type;
@property (retain, nonatomic) NSString *structName;
@property (copy, nonatomic) NSString *protocol;
@property (nonatomic) BOOL isOptional;
@property (nonatomic) BOOL isStandardJSONType;
@property (nonatomic) BOOL isMutable;
@property (nonatomic) SEL customGetter;
@property (retain, nonatomic) NSMutableDictionary *customSetters;

- (id)description;
- (void).cxx_destruct;

@end
