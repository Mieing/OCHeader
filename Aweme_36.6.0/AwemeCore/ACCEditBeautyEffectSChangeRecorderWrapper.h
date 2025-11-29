@class NSString, ACCEditBeautyEffectSChangeRecorder;

@interface ACCEditBeautyEffectSChangeRecorderWrapper : NSObject <ACCEditBeautyEffectDDDataChangeRecorder>

@property (retain, nonatomic) ACCEditBeautyEffectSChangeRecorder *recorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
