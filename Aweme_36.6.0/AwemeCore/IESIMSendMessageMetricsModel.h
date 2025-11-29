@class NSString, NSArray;

@interface IESIMSendMessageMetricsModel : NSObject

@property (nonatomic) double msgStartTimestamp;
@property (nonatomic) double resourceStartSendTimestamp;
@property (nonatomic) long long resourceEncodeDuration;
@property (nonatomic) long long ressourceUploadDuration;
@property (nonatomic) double resourceSize;
@property (copy, nonatomic) NSString *resourceType;
@property (nonatomic) BOOL fromCache;
@property (copy, nonatomic) NSArray *requestMetrics;

- (void).cxx_destruct;

@end
