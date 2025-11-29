@class NSString, NSArray;

@interface WCAdFinderTopicInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *finderEncryptedTopicId;
@property (retain, nonatomic) NSString *finderTopicName;
@property (retain, nonatomic) NSString *finderTopicTitle;
@property (retain, nonatomic) NSString *relationText;
@property (retain, nonatomic) NSArray *relationAvatarList;
@property (retain, nonatomic) NSArray *displayRelationAvatarList;
@property (retain, nonatomic) NSArray *finderTopicResList;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
