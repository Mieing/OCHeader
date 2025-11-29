@class NSString;

@interface HTSLivePayloadStartMicrogameStamp : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *mpId;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *taskSource;
@property (copy, nonatomic) NSString *entranceFrom;
@property (nonatomic) int bidType;
@property (nonatomic) int bidPrice;
@property (nonatomic) int bidRatio;

+ (id)descriptor;

@end
