@class NSString, NSDictionary;

@interface TTAccountShareRequestConfig : NSObject

@property (copy, nonatomic) NSString *passportShareOpenUniversalLink;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) long long timeout;
@property (copy, nonatomic) NSDictionary *extraOpenParams;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
