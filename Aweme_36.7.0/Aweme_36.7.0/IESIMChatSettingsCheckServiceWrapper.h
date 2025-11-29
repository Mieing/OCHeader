@class NSString, NSObject;
@protocol IESIMChatSettingsCheckServiceProtocol;

@interface IESIMChatSettingsCheckServiceWrapper : NSProxy <IESIMChatSettingsCheckServiceProtocol>

@property (retain, nonatomic) NSObject<IESIMChatSettingsCheckServiceProtocol> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
