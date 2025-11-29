@class NSString;

@interface AWEYAPRestoreInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *restoreID;
@property (nonatomic) double createTimestamp;
@property (copy, nonatomic) NSString *restoreSchema;
@property (nonatomic) double expireAt;

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
