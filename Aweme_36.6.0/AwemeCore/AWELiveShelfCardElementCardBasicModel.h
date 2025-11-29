@class NSString, NSNumber;

@interface AWELiveShelfCardElementCardBasicModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *productId;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSNumber *industryBizType;
@property (copy, nonatomic) NSNumber *productSubType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
