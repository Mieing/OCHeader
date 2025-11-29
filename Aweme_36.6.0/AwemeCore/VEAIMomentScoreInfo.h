@interface VEAIMomentScoreInfo : NSObject <WCTColumnCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float score;
@property (nonatomic) float faceScore;
@property (nonatomic) float qualityScore;
@property (nonatomic) float sharpnessScore;
@property (nonatomic) double timeStamp;
@property (nonatomic) float meaninglessScore;
@property (nonatomic) float portraitScore;

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)a0;

- (id)archivedWCTValue;
- (id)acc_scoreInfoDict;
- (id)acc_scoreInfoDict;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
