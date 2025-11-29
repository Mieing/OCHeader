@class NSString, AWEUGKitComponent, AWEUGDesktopChannelGuideUIConfigModel;

@interface AWEUGDesktopChannelBaseViewController : NSObject

@property (retain, nonatomic) AWEUGDesktopChannelGuideUIConfigModel *model;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly, nonatomic) AWEUGKitComponent *component;

- (id)sceneUniqueKey;
- (id)initWithModel:(id)a0 scene:(id)a1 enterFrom:(id)a2 component:(id)a3;
- (void).cxx_destruct;
- (void)show;

@end
