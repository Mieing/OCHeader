@class NSString, NSDictionary, NSArray;

@interface AWEShareQRCodeRequestModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSDictionary *activityInfo;
@property (copy, nonatomic) NSString *shareScene;
@property (nonatomic) BOOL useRebrandStyle;
@property (copy, nonatomic) NSString *editionID;
@property (nonatomic) unsigned long long qrCodeShapeType;
@property (nonatomic) unsigned long long qrCodeType;
@property (copy, nonatomic) NSArray *urlList;
@property (copy, nonatomic) NSArray *avatarList;
@property (nonatomic) long long expireTimeInSecond;

- (BOOL)isEqualToQRCodeRequestModel:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
