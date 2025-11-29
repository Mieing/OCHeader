@class NSError, NSString;

@interface CJPayNetworkErrorContext : NSObject

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *urlStr;
@property (copy, nonatomic) NSString *scene;

- (void).cxx_destruct;

@end
