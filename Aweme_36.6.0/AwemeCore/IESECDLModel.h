@class NSString, NSDictionary, NSArray;

@interface IESECDLModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *viewType;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSDictionary *groupOptions;
@property (copy, nonatomic) NSDictionary *layoutParams;
@property (copy, nonatomic) NSDictionary *uiParams;
@property (copy, nonatomic) NSArray *children;
@property (retain, nonatomic) IESECDLModel *parentModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)childrenJSONTransformer;

- (void).cxx_destruct;

@end
