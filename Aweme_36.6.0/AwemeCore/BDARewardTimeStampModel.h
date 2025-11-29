@class NSMutableDictionary;

@interface BDARewardTimeStampModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *timestampDictionary;

- (id)timestampForType:(unsigned long long)a0;
- (long long)convert1970MsTo2001Ms:(long long)a0;
- (void)recordTimestamp:(unsigned long long)a0;
- (void)recordLynxSetupTimestamp:(id)a0;
- (void)recordRequestTimestamp:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;

@end
