@class NSString;

@interface IESECUidTransformServiceImpl : NSObject <IESECUidTransformService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)recordSecUidWithUid:(id)a0 withSecUid:(id)a1;
+ (id)getSecUidWithUid:(id)a0;


@end
