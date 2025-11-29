@interface VEAIMomentReframeInfo : NSObject <WCTColumnCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float score;
@property (nonatomic) struct VEAIMomentReframeFrame { double centerX; double centerY; double width; double height; double rotateAngle; } frame;

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)a0;

- (id)archivedWCTValue;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
