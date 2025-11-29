@class NSArray;

@interface IESLivePortalSenderLynxView : IESLivePortalLynxView <HTSLivePluginLayoutView>

@property (retain, nonatomic) NSArray *portals;
@property (nonatomic) long long count;
@property (nonatomic) long long newestPortalID;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)initWithPortals:(id)a0;
- (void)updateWithPortals:(id)a0;
- (id)getEnterCount:(id)a0;
- (void)pr_updateWithCount:(long long)a0;
- (void)pr_updatepersonCountLabelWithPortal:(id)a0;
- (void).cxx_destruct;
- (id)viewType;

@end
