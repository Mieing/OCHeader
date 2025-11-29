@class NSString, NSArray;

@interface BUTNCServiceConfig : NSObject

@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *tncPath;
@property (copy, nonatomic) NSArray *tncDomains;
@property (copy, nonatomic) id /* block */ tncRequestParam;

- (void).cxx_destruct;

@end
