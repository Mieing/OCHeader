@class NSNumber, NSString, NSDictionary;

@interface IESECBSTBaseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *isBst;
@property (copy, nonatomic) NSString *bstType;
@property (copy, nonatomic) NSString *bstModel;
@property (copy, nonatomic) NSString *bstBiz;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
