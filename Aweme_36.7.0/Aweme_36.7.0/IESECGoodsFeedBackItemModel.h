@class NSString, IESECURLModel, NSDictionary;

@interface IESECGoodsFeedBackItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *tagName;
@property (copy, nonatomic) NSString *tagCode;
@property (copy, nonatomic) NSString *btm;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
