@class NSString;

@interface BDScreenCastUrlModel : NSObject

@property (copy, nonatomic) NSString *resolution;
@property (copy, nonatomic) NSString *resolutionShowTitle;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *rawUrl;
@property (nonatomic) long long width;
@property (nonatomic) long long height;

- (void)appendPlayInfoParamsIfNeeded;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
