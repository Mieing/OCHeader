@class NSString;

@interface AWEECTagExtra : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL highlight;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *sort;
@property (retain, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)highlightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
