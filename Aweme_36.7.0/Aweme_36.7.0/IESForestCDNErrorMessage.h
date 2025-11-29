@class NSString;

@interface IESForestCDNErrorMessage : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *detail;

- (id)initWithURL:(id)a0 detail:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
