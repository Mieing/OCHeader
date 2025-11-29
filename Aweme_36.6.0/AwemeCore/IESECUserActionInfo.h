@class NSString;

@interface IESECUserActionInfo : NSObject

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *sceneId;
@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) long long type;

- (id)initWithAction:(id)a0 scene:(id)a1 sceneId:(id)a2 anchorId:(id)a3 type:(long long)a4;
- (void).cxx_destruct;

@end
