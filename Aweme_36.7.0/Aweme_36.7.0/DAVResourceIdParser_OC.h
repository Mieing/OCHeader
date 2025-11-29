@class NSString, NSDictionary;

@interface DAVResourceIdParser_OC : NSObject

@property (copy, nonatomic) NSString *protocol;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSDictionary *queryParams;
@property (nonatomic) struct shared_ptr<davinci::resource::DAVResourceIdParser> { struct DAVResourceIdParser *__ptr_; struct __shared_weak_count *__cntrl_; } parser;

- (id)initWithResourceId:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
