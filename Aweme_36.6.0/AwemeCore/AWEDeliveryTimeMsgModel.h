@class NSString;

@interface AWEDeliveryTimeMsgModel : AWEDeliveryBaseMsgModel

@property (nonatomic) double updateTimeStamp;
@property (copy, nonatomic) NSString *timeString;

+ (Class)cellClass;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
