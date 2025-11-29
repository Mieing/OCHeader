@class NSString, NSDate;

@interface AFDAwemeVideoDataCacheInfo : NSObject

@property (copy, nonatomic) NSString *awemeID;
@property (retain, nonatomic) NSDate *totallyBufferedDate;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
