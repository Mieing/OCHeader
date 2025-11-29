@class NSNumber, NSString, NSDictionary;

@interface ReportPageInfo : NSObject

@property (retain, nonatomic) NSNumber *pageId;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSDictionary *pageParams;

+ (id)makeWithPageId:(id)a0 pageName:(id)a1 pageParams:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
