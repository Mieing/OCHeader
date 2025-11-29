@class NSString, NSArray;

@interface AWEPLVButtonListHeaderModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) NSString *titleIcon;
@property (retain, nonatomic) NSArray *buttonList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
