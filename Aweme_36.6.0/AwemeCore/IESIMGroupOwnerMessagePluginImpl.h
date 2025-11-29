@class NSString;

@interface IESIMGroupOwnerMessagePluginImpl : NSObject <IESIMGroupOwnerMessagePlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (id)displayStringWithMessage:(id)a0;

@end
