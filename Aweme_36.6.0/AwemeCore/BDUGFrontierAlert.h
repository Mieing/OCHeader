@class NSString;

@interface BDUGFrontierAlert : NSObject

@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL isUsed;

- (id)initWithAlert:(id)a0 newAlert:(id)a1;
- (void).cxx_destruct;

@end
