@interface VEAIMomentFaceFeature : NSObject <WCTColumnCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long faceId;
@property (nonatomic) struct VEEffectRectF { float left; float top; float right; float bottom; } rect;
@property (nonatomic) struct VEEffectBoxI { int lu_x; int lu_y; int ru_x; int ru_y; int ld_x; int ld_y; int rd_x; int rd_y; } box;
@property (nonatomic) float yaw;
@property (nonatomic) float pitch;
@property (nonatomic) float roll;
@property (nonatomic) float realFaceProb;
@property (nonatomic) float quailty;
@property (nonatomic) float boyProb;
@property (nonatomic) float age;
@property (nonatomic) float happyScore;

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)a0;

- (id)archivedWCTValue;
- (id)acc_bboxInfo;
- (id)acc_bboxInfo;
- (id)acc_rect;
- (id)acc_rect;
- (id)acc_faceInfoDict;
- (id)acc_faceInfoDict;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
