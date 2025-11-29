@class NSMutableArray;

@interface IESLiveAioLinkNotifyServiceCenterStateRequest_StateLoaded : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *servicesArray;
@property (readonly, nonatomic) unsigned long long servicesArray_Count;

+ (id)descriptor;

@end
