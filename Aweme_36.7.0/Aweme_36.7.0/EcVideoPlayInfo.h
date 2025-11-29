@class NSString;

@interface EcVideoPlayInfo : NSObject

@property (copy, nonatomic) NSString *primaryUrl;
@property (copy, nonatomic) NSString *secondaryUrl;
@property (copy, nonatomic) NSString *urlKey;

+ (id)modelCustomPropertyMapper;

- (id)initWithVideoPlayInfo:(id)a0;
- (void).cxx_destruct;

@end
