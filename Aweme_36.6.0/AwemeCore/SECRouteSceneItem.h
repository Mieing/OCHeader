@class NSString, NSDictionary;

@interface SECRouteSceneItem : NSObject <NSCoding>

@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSDictionary *sceneInfo;

+ (id)allSceneNameInSceneItemArray:(id)a0;
+ (id)allSceneInfoInSceneItemArray:(id)a0;
+ (id)sceneItemArraySerialize:(id)a0;

- (id)initWithName:(id)a0 sceneInfo:(id)a1;
- (id)dictSerialize;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
