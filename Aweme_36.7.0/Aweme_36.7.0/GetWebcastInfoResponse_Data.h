@class AnchorLinkerInfo, NSMutableArray, GetWebcastInfoResponse_WebcastInfo;

@interface GetWebcastInfoResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) GetWebcastInfoResponse_WebcastInfo *info;
@property (nonatomic) BOOL hasInfo;
@property (retain, nonatomic) AnchorLinkerInfo *linkerInfo;
@property (nonatomic) BOOL hasLinkerInfo;
@property (retain, nonatomic) NSMutableArray *ackCfgArray;
@property (readonly, nonatomic) unsigned long long ackCfgArray_Count;

+ (id)descriptor;

@end
