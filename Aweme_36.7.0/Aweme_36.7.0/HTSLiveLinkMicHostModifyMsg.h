@class GPBInt64Array, HTSLiveCommon, NSMutableArray;

@interface HTSLiveLinkMicHostModifyMsg : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) GPBInt64Array *hostUidsArray;
@property (readonly, nonatomic) unsigned long long hostUidsArray_Count;
@property (retain, nonatomic) NSMutableArray *hostOpenIdsArray;
@property (readonly, nonatomic) unsigned long long hostOpenIdsArray_Count;

+ (id)descriptor;

@end
