@class NSString;

@interface WCAdHeadFinderTopicInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *finderEncryptedTopicId;
@property (retain, nonatomic) NSString *finderTopicName;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
