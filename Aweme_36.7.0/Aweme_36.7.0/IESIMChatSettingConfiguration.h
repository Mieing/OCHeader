@class NSString, IESIMChatSettingsBaseComponentContext, NSArray;

@interface IESIMChatSettingConfiguration : NSObject

@property (retain, nonatomic) IESIMChatSettingsBaseComponentContext *context;
@property (retain, nonatomic) NSString *dataComponentIdentifier;
@property (retain, nonatomic) NSArray *featureComponentIdentifierList;
@property (retain, nonatomic) NSArray *lazyFeatureComponentIdentifierList;

- (id)initWithContext:(id)a0 dataComponent:(id)a1 featureComponentList:(id)a2 lazyFeatureComponentList:(id)a3;
- (void).cxx_destruct;

@end
