@class NSString, HTSLiveProductPriceStruct;

@interface HTSLiveBindSubProductData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *parentProductId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int liveStatus;
@property (nonatomic) int ticketStatus;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) int deliveryStatus;
@property (nonatomic) long long liveTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long liveStartTime;
@property (nonatomic) long long liveEndTime;
@property (nonatomic) long long viewRight;
@property (nonatomic) BOOL isReplay;
@property (nonatomic) long long replayId;
@property (copy, nonatomic) NSString *replayIdStr;
@property (nonatomic) int disableReason;
@property (copy, nonatomic) NSString *cameraId;
@property (retain, nonatomic) HTSLiveProductPriceStruct *priceInfo;
@property (nonatomic) BOOL hasPriceInfo;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *itemId;

+ (id)descriptor;

@end
