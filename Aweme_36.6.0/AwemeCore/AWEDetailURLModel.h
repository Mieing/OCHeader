@class NSArray, NSString;

@interface AWEDetailURLModel : NSObject

@property (copy, nonatomic) NSArray *URLList;
@property (copy, nonatomic) NSString *URI;

- (id)initWithURI:(id)a0 URLList:(id)a1;
- (id)initWithAWEURLModel:(id)a0;
- (void).cxx_destruct;

@end
