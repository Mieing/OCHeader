@class NSString;

@interface VEAIMomentTag : NSObject <WCTColumnCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long identity;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) float confidence;

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)a0;

- (id)archivedWCTValue;
- (id)acc_tagInfoDict;
- (id)acc_tagInfoDict;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
