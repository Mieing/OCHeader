@class NSString, NSArray, NSDictionary, NSURLComponents;

@interface AWEUrlParam : NSObject

@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSArray *pathComponents;
@property (copy, nonatomic) NSDictionary *queryItems;
@property (copy, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSURLComponents *urlComponents;
@property (readonly, nonatomic) NSString *absoluteUrlString;

+ (id)objectFromUrl:(id)a0;

- (void)changeScheme:(id)a0;
- (BOOL)isOpenUrlKindOfNewVideoPush;
- (void)addQueryValue:(id)a0 forKey:(id)a1;
- (void)addQueryItems:(id)a0;
- (id)parseReferStr;
- (id)initWithUrl:(id)a0 userInfo:(id)a1;
- (id)checkParseReferStr;
- (BOOL)pathContainsPattern:(id)a0;
- (void)removeQueryItemsForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithUrl:(id)a0;

@end
