@class NSString, NSObject;
@protocol IESIMGroupSettingsExtraItemsServiceProtocol;

@interface IESIMGroupSettingsExtraItemsServiceWrapper : NSProxy <IESIMGroupSettingsExtraItemsServiceProtocol>

@property (retain, nonatomic) NSObject<IESIMGroupSettingsExtraItemsServiceProtocol> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
