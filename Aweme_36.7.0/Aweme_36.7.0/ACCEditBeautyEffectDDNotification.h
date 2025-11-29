@class NSArray;
@protocol ACCEditBeautyEffectDDDataChange, ACCEditBeautyEffectDDData;

@interface ACCEditBeautyEffectDDNotification : NSObject

@property (readonly, nonatomic) id<ACCEditBeautyEffectDDData> preData;
@property (readonly, nonatomic) id<ACCEditBeautyEffectDDData> data;
@property (readonly, nonatomic) id<ACCEditBeautyEffectDDDataChange> change;
@property (readonly, nonatomic) NSArray *triggers;

- (id)initWith:(id)a0 state:(id)a1 change:(id)a2 triggers:(id)a3;
- (void).cxx_destruct;

@end
