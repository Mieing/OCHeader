@class NSString, UIImage;

@interface BDPEvidenceModel : NSObject

@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *popupTitle;
@property (copy, nonatomic) NSString *popupContent;
@property (copy, nonatomic) NSString *videoExceptionType;
@property (copy, nonatomic) NSString *netPath;
@property (copy, nonatomic) NSString *netStatusCode;
@property (nonatomic) long long indicatorType;
@property (retain, nonatomic) UIImage *snapshot;

- (void).cxx_destruct;

@end
