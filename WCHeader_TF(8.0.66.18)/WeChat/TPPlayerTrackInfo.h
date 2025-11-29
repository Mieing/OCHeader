@class NSString, NSDictionary;

@interface TPPlayerTrackInfo : TPTrackInfo

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSDictionary *httpHeader;

- (void).cxx_destruct;

@end
