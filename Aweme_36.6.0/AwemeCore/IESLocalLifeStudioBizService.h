@class NSString;

@interface IESLocalLifeStudioBizService : HTSService <IESLocalLifeStudioBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ensureLoginRequirementsForVideoRecording:(id /* block */)a0;
+ (id)convertRepoPOIModel:(id)a0;
+ (void)createVideoWithPoiModel:(id)a0 withInfo:(id)a1 referString:(id)a2 executeBlock:(id /* block */)a3;


@end
