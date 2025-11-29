@class NSNumber, NSDictionary, NSString;

@interface HTSInteractStreamContent : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *w;
@property (retain, nonatomic) NSNumber *h;
@property (retain, nonatomic) NSNumber *x;
@property (retain, nonatomic) NSNumber *y;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
