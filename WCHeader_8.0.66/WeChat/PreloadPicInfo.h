@class NSString, NSArray;

@interface PreloadPicInfo : NSObject

@property (copy, nonatomic) NSString *contentUrl;
@property (copy, nonatomic) NSArray *preloadPicUrls;

+ (id)makeWithContentUrl:(id)a0 preloadPicUrls:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
