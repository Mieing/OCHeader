@class NSArray;
@protocol CKDDDataChange, CKDDData;

@interface CKDDNotification : NSObject

@property (readonly, nonatomic) id<CKDDData> preData;
@property (readonly, nonatomic) id<CKDDData> data;
@property (readonly, nonatomic) id<CKDDDataChange> change;
@property (readonly, nonatomic) NSArray *triggers;

- (id)initWith:(id)a0 state:(id)a1 change:(id)a2 triggers:(id)a3;
- (void).cxx_destruct;

@end
