@class NSString;

@interface AWEShareTrackerService : HTSService <AWEShareTrackerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackChannelClick:(id)a0 context:(id)a1;
+ (void)trackShareSuccess:(id)a0;
+ (void)trackShareAfterDownload:(id)a0;
+ (void)trackShareAfterLink:(id)a0;
+ (id)commonTrackParameters:(id)a0;
+ (id)paramsByAddingShare:(id)a0 awemeModel:(id)a1;
+ (void)trackSubPanelShow:(id)a0;
+ (void)trackSubPanelElementShow:(id)a0 extParameters:(id)a1;
+ (void)trackSubPanelElementClick:(id)a0 extParameters:(id)a1;
+ (void)trackClientShareFunctionShow:(id)a0 extParameters:(id)a1;
+ (BOOL)isShareTrackerEnabled;
+ (void)trackFunctionClick:(id)a0 context:(id)a1;


@end
