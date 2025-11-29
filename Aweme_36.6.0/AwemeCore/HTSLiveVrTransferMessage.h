@class NSString, GPBInt64Int64Dictionary, HTSLiveCommon;

@interface HTSLiveVrTransferMessage : IESLivePBBaseMessage

@property (nonatomic) long long timeStamp;
@property (nonatomic) long long materailId;
@property (copy, nonatomic) NSString *materialURL;
@property (retain, nonatomic) GPBInt64Int64Dictionary *layerStatus;
@property (readonly, nonatomic) unsigned long long layerStatus_Count;
@property (nonatomic) long long vrTransferType;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;

+ (id)descriptor;

@end
