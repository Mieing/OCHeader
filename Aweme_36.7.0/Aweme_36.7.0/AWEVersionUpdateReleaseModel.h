@class NSString, NSNumber;

@interface AWEVersionUpdateReleaseModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *latestPublishingVersion;
@property (copy, nonatomic) NSString *latestPublishedVersion;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSNumber *pIsValid;
@property (readonly, nonatomic) BOOL isValid;

+ (long long)diffVersionCountWithLeftVersion:(id)a0 rightVersion:(id)a1 error:(id *)a2;
+ (BOOL)checkVersionCodeValid:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
