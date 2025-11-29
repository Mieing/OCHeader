@class NSString;

@interface IESIMGroupChatPanelPluginImpl : NSObject <IESIMGroupChatPanelPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)customControllerCommandActionWithType:(long long)a0 context:(id)a1 bizExtension:(id)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
