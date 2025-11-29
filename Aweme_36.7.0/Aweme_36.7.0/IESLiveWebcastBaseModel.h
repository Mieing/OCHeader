@class NSDictionary, NSString;

@interface IESLiveWebcastBaseModel : NSObject

@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *schemeExtraParams;
@property (copy, nonatomic) NSString *originalURL;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
