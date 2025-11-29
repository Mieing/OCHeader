@class NSString, GPBStringInt64Dictionary;

@interface HTSLiveVrInfo_VrSixdofTransferInfo : IESLivePBBaseMessage

@property (nonatomic) long long materialId;
@property (copy, nonatomic) NSString *materialURL;
@property (retain, nonatomic) GPBStringInt64Dictionary *layerStatus;
@property (readonly, nonatomic) unsigned long long layerStatus_Count;
@property (copy, nonatomic) NSString *streamLayoutVersion;

+ (id)descriptor;

@end
