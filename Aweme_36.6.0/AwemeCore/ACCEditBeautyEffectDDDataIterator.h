@protocol ACCEditBeautyEffectDDDataChangeRecorder, ACCEditBeautyEffectDDData;

@interface ACCEditBeautyEffectDDDataIterator : NSObject

@property (retain, nonatomic) id<ACCEditBeautyEffectDDData> initialData;
@property (retain, nonatomic) id<ACCEditBeautyEffectDDDataChangeRecorder> recorder;
@property (retain, nonatomic) id<ACCEditBeautyEffectDDData> data;

- (id)initWith:(id)a0 recorder:(id)a1;
- (void).cxx_destruct;
- (void)next:(id /* block */)a0;

@end
