@class NSString, NSNumber;

@interface AWESearchScanHistoryModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *scanID;
@property (retain, nonatomic) NSNumber *itemTimestamp;
@property (copy, nonatomic) NSString *srcImage;
@property (copy, nonatomic) NSString *tosURI;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)compareHistoryModel:(id)a0;
- (void).cxx_destruct;

@end
