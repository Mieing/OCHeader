@interface AWECommentAnchorManager : NSObject

+ (id)anchorModelWithAweme:(id)a0 priorityKey:(id)a1 tapAnchorBlock:(id /* block */)a2;
+ (BOOL)handleAnchorClickInSchemaTypeCommonDetailPage:(id)a0;
+ (id)anchorModelWithAweme:(id)a0 tapAnchorBlock:(id /* block */)a1;
+ (id)anchorModelWithAweme:(id)a0 priorityKey:(id)a1 needWhiteIcon:(BOOL)a2 tapAnchorBlock:(id /* block */)a3 isComment:(BOOL)a4;
+ (id)iconWithName:(id)a0 whiteIconName:(id)a1 needWhiteIcon:(BOOL)a2;
+ (id)styleIconFromModel:(id)a0;

@end
