@class NSString, NSObject;
@protocol IESIMGroupSettingsBasicItemsServiceProtocol;

@interface IESIMGroupSettingsBasicItemsServiceRegisterWrapper : NSProxy <IESIMGroupSettingsBasicItemsServiceProtocol>

@property (retain, nonatomic) NSObject<IESIMGroupSettingsBasicItemsServiceProtocol> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
