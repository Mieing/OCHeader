@class NSString, NSDictionary, NSDate;

@interface AWEShowDataInjCacheMetaData : NSObject

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSDate *storeDate;
@property (readonly, nonatomic) double storeTimestamp;
@property (copy, nonatomic) NSDictionary *businessParams;
@property (copy, nonatomic) NSString *fingerPrint;

- (void).cxx_destruct;

@end
