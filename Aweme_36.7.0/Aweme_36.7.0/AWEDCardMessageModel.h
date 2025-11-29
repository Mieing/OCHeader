@class NSArray, NSString;

@interface AWEDCardMessageModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSArray *cardList;
@property (copy, nonatomic) NSString *logID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
