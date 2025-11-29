@class NSString, NSObject;
@protocol IESIMGroupSettingsServiceProtocol;

@interface IESIMGroupSettingsSwiftServiceWrapper : NSProxy <IESIMGroupSettingsServiceProtocol>

@property (retain, nonatomic) NSObject<IESIMGroupSettingsServiceProtocol> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
