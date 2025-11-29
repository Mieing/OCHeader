@class NSString;

@interface IESIMLocationMessagePluginImpl : HTSService <IESIMLocationMessagePlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createShareLocationDetailViewControllerWithMessage:(id)a0;

@end
