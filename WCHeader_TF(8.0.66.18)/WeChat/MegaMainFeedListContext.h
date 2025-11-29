@class NSArray, NSNumber, FlutterStandardTypedData;

@interface MegaMainFeedListContext : NSObject

@property (copy, nonatomic) NSArray *mainFeedList;
@property (retain, nonatomic) NSNumber *hasMore;
@property (retain, nonatomic) FlutterStandardTypedData *lastBuffer;

+ (id)makeWithMainFeedList:(id)a0 hasMore:(id)a1 lastBuffer:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
