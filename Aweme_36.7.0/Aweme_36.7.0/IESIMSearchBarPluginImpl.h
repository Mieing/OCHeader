@class NSString;

@interface IESIMSearchBarPluginImpl : NSObject <IESIMSearchBarPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (id)createSearchViewWithStyle:(long long)a0;

@end
