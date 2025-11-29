@class AWEIMSkylightDotInfoModel;

@interface AWEIMSkylightFriendWholeDotModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AWEIMSkylightDotInfoModel *onlineConfig;
@property (retain, nonatomic) AWEIMSkylightDotInfoModel *birthdayConfig;

- (id)getContentDictionary;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
