@class NSNumber, NSString;

@interface IESECLiveGoodsCategoryInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *firstCategory;
@property (retain, nonatomic) NSNumber *secondCategory;
@property (retain, nonatomic) NSNumber *thirdCategory;
@property (retain, nonatomic) NSNumber *fourthCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
