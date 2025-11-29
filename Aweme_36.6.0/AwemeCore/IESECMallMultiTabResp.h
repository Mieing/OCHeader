@class NSString, NSDictionary, IESECMallMultiTabData, NSError;

@interface IESECMallMultiTabResp : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lynxSchema;
@property (retain, nonatomic) IESECMallMultiTabData *lynxData;
@property (copy, nonatomic) NSDictionary *lynxDataDic;
@property (copy, nonatomic) NSDictionary *skinInfo;
@property (nonatomic) BOOL isColdLaunchData;
@property (retain, nonatomic) NSError *coldLaunchDataError;
@property (nonatomic) double startColdLaunchData;
@property (nonatomic) double endColdLaunchData;
@property (nonatomic) double endJsonToModel;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) NSString *logId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lynxDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValidity;
- (void).cxx_destruct;

@end
