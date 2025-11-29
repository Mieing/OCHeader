@class NSNumber;

@interface OpenWebPageInfo : NSObject

@property (retain, nonatomic) NSNumber *scene;
@property (retain, nonatomic) NSNumber *hideOptionMenu;

+ (id)makeWithScene:(id)a0 hideOptionMenu:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
