@class NSNumber, NSString, AWELiteActivityPopupDataModel;

@interface AWELiteActivityPopupResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *errNO;
@property (copy, nonatomic) NSString *errTips;
@property (retain, nonatomic) AWELiteActivityPopupDataModel *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
