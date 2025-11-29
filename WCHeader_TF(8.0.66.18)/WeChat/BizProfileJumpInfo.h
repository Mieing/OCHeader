@class NSString, NSNumber;

@interface BizProfileJumpInfo : NSObject

@property (copy, nonatomic) NSString *userName;
@property (retain, nonatomic) NSNumber *addContactScene;
@property (retain, nonatomic) NSNumber *openArticleFromScene;
@property (retain, nonatomic) NSNumber *enterTarget;
@property (copy, nonatomic) NSString *bizFinderExtraData;
@property (copy, nonatomic) NSString *articleUrl;
@property (retain, nonatomic) NSNumber *bizFromScene;

+ (id)makeWithUserName:(id)a0 addContactScene:(id)a1 openArticleFromScene:(id)a2 enterTarget:(id)a3 bizFinderExtraData:(id)a4 articleUrl:(id)a5 bizFromScene:(id)a6;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
