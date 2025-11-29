@class NSString, NSDictionary;

@interface TMPrivacyPageModel : NSObject

@property (copy, nonatomic) NSString *pageName;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSDictionary *extra;

- (id)jsonDict;
- (void).cxx_destruct;

@end
