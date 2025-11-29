@class DeviceViewInfo, NSMutableArray;

@interface DeviceViewListResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) DeviceViewInfo *currentViewInfo;
@property (nonatomic) long long connectedNum;
@property (nonatomic) long long currentViewId;
@property (retain, nonatomic) NSMutableArray *deviceViewListArray;
@property (readonly, nonatomic) unsigned long long deviceViewListArray_Count;

+ (id)descriptor;

@end
