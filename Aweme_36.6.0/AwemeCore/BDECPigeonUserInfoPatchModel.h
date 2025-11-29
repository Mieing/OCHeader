@class NSString;

@interface BDECPigeonUserInfoPatchModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *pigeonUid;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatarURL;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
