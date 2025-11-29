@class NSString;

@interface TTRequestRetryByHeaderFilterObject : NSObject

@property (copy, nonatomic) NSString *filterResponseHeader;
@property (copy, nonatomic) id /* block */ retryRequestByHeaderCallback;

- (id)initWithFilterHeader:(id)a0 retryRequestByHeaderCallback:(id /* block */)a1;
- (void).cxx_destruct;

@end
