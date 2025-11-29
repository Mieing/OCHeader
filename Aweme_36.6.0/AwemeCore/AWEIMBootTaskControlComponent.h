@class NSString, NSMutableDictionary;

@interface AWEIMBootTaskControlComponent : NSObject <IESIMIMBootTaskControlService>

@property (retain, nonatomic) NSMutableDictionary *sceneCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
