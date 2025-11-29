@class HTSLiveVrInfo_VrSixdofTransferInfo, GPBStringInt64Dictionary;

@interface HTSLiveVrInfo : IESLivePBBaseMessage

@property (nonatomic) long long vrTransferType;
@property (retain, nonatomic) GPBStringInt64Dictionary *streamMapping;
@property (readonly, nonatomic) unsigned long long streamMapping_Count;
@property (retain, nonatomic) HTSLiveVrInfo_VrSixdofTransferInfo *vrSixdofTransferInfo;
@property (nonatomic) BOOL hasVrSixdofTransferInfo;

+ (id)descriptor;

@end
