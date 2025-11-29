@class NSString, NSDictionary;

@interface AWEECOMIMRcvMsgTrackModel : NSObject

@property (copy, nonatomic) NSString *msgId;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;
- (id)params;

@end
