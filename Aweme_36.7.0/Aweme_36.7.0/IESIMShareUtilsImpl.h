@class NSString;

@interface IESIMShareUtilsImpl : NSObject <IESIMShareUtilsInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (id)createFakeFlowShareModel;

@end
