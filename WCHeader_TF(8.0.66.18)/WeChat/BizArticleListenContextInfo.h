@class NSString;

@interface BizArticleListenContextInfo : NSObject

@property (copy, nonatomic) NSString *articleUrl;
@property (copy, nonatomic) NSString *audioId;

+ (id)makeWithArticleUrl:(id)a0 audioId:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
