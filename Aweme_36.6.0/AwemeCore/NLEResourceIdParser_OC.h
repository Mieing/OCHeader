@class NSString, NSDictionary;

@interface NLEResourceIdParser_OC : NSObject

@property (readonly, copy, nonatomic) NSString *protocol;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSDictionary *queryParams;

- (id)initWithResourceId:(id)a0;

@end
