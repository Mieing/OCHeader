@class NSNumber, NSString;

@interface IESECGoodsCategoryInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *firstCategory;
@property (retain, nonatomic) NSNumber *secondCategory;
@property (retain, nonatomic) NSNumber *thirdCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
