@class NSString, NSNumber;

@interface TingItemExt : NSObject

@property (copy, nonatomic) NSString *extInfo;
@property (retain, nonatomic) NSNumber *playIndex;
@property (retain, nonatomic) NSNumber *fromScene;
@property (retain, nonatomic) NSNumber *withFloatBall;
@property (copy, nonatomic) NSString *singerCategoryId;

+ (id)makeWithExtInfo:(id)a0 playIndex:(id)a1 fromScene:(id)a2 withFloatBall:(id)a3 singerCategoryId:(id)a4;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
