@class NSString, NSDictionary, NSURL, NSData;

@interface CRRequest : NSObject

@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSData *body;

+ (id)requestWithBuilder:(id)a0;
+ (id)requestWithBuilderBlock:(id /* block */)a0;

- (id)initWithBuilder:(id)a0;
- (void).cxx_destruct;

@end
