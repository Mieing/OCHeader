@class NSString;

@interface BDByteCastPPUrlBean : NSObject

@property (copy, nonatomic) NSString *urlType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *resolution;
@property (nonatomic) long long bitrate;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) BOOL isDefault;
@property (copy, nonatomic) NSString *extra;

- (void).cxx_destruct;

@end
