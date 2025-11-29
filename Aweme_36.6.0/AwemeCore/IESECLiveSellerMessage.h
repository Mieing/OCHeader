@class IESECPopupInfo, NSMutableArray, IESECAuthorOrderLimitInfo;

@interface IESECLiveSellerMessage : GPBMessage

@property (nonatomic) int msgType;
@property (retain, nonatomic) IESECAuthorOrderLimitInfo *authorOrderLimitInfo;
@property (nonatomic) BOOL hasAuthorOrderLimitInfo;
@property (retain, nonatomic) NSMutableArray *listRoomStatsDataArray;
@property (readonly, nonatomic) unsigned long long listRoomStatsDataArray_Count;
@property (retain, nonatomic) IESECPopupInfo *flashPopupInfo;
@property (nonatomic) BOOL hasFlashPopupInfo;

+ (id)descriptor;

@end
