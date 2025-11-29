@class NSString, IESLiveAnchorAudienceInteractiveGameModel, IESLiveComponentContext;
@protocol IESLiveDIContext;

@interface IESLiveGameOpenPlatformLauncherConfiguration : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *iconURL;
@property (readonly, copy, nonatomic) NSString *schema;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveDIContext> DIContext;
@property (retain, nonatomic) IESLiveAnchorAudienceInteractiveGameModel *gameModel;

- (void).cxx_destruct;
- (id)initWithSchema:(id)a0;

@end
