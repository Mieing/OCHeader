@class NSString, NSDictionary;

@interface AWESearchMiddleGSRequstContext : NSObject

@property (copy, nonatomic) NSString *urlStr;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (nonatomic) BOOL useNewInterface;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSString *searchStyle;
@property (copy, nonatomic) NSString *cacheKey;

- (void).cxx_destruct;

@end
