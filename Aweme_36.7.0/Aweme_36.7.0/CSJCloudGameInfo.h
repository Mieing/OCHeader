@class NSString;

@interface CSJCloudGameInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *cloudGameUrl;
@property (nonatomic) long long cloudGameType;

- (id)convertToPlayableInfo;
- (void)setupDataWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
