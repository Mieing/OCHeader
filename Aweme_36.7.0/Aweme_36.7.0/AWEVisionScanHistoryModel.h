@class NSString, NSNumber;

@interface AWEVisionScanHistoryModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *scanID;
@property (retain, nonatomic) NSNumber *itemTimestamp;
@property (copy, nonatomic) NSString *srcImage;
@property (copy, nonatomic) NSString *tosURI;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
