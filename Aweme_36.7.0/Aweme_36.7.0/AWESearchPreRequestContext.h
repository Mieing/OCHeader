@class AWESearchPreNetworkRequestParamsObject, AWESearchPreRequestParamsContextParamsObject, AWESearchPreRequestManagerParamsObject;

@interface AWESearchPreRequestContext : NSObject

@property (retain, nonatomic) AWESearchPreNetworkRequestParamsObject *preNetworkRequestParamsObject;
@property (retain, nonatomic) AWESearchPreRequestManagerParamsObject *preRequestManagerParamsObject;
@property (retain, nonatomic) AWESearchPreRequestParamsContextParamsObject *requestParamsContextParamsObject;

- (void).cxx_destruct;

@end
