@class NSString;

@interface AWESearchBottomWordsTool : NSObject

@property (copy, nonatomic) NSString *currentTextQuery;

- (void)requestBottomWordsWithTextQuery:(id)a0 searchScene:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
