@class NSString, NSArray;

@interface LynxSubErrorCodeMetaData : NSObject

@property (readonly, nonatomic) long long level;
@property (readonly, nonatomic) NSString *fixSuggestion;
@property (readonly, nonatomic) NSArray *consumer;

- (id)initWithLevel:(long long)a0 fixSuggestion:(id)a1 consumer:(id)a2;
- (void).cxx_destruct;

@end
