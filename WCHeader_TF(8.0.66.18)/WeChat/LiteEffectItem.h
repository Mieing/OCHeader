@class NSString, MMITransmitKvData;

@interface LiteEffectItem : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) MMITransmitKvData *data;

- (void).cxx_destruct;

@end
