@class NSString, NSNumber;

@interface AWEDoubleColumnSearchMerchandiseVideoInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *mainUrl;
@property (copy, nonatomic) NSString *backupUrl;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *duration;
@property (nonatomic) long long awemeType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
