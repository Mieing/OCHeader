@class NSArray, NSNumber;

@interface FlutterCgiFinderExtInfo : NSObject

@property (nonatomic) long long finderBaseRequestIndex;
@property (copy, nonatomic) NSArray *feedIdList;
@property (retain, nonatomic) NSNumber *scene;
@property (retain, nonatomic) NSNumber *enterScene;
@property (nonatomic) BOOL useSessionBuffer;

+ (id)makeWithFinderBaseRequestIndex:(long long)a0 feedIdList:(id)a1 scene:(id)a2 enterScene:(id)a3 useSessionBuffer:(BOOL)a4;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
