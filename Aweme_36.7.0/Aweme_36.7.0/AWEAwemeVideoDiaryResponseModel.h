@class NSNumber, NSString, AWEAwemeVideoDiaryDataModel;

@interface AWEAwemeVideoDiaryResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *errNo;
@property (copy, nonatomic) NSString *errTips;
@property (retain, nonatomic) AWEAwemeVideoDiaryDataModel *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
