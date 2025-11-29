@class NSString, NSArray, NSDictionary, AWEIMSkylightDotInfoModel;

@interface AWEIMSkylightBizInfoDataModel : NSObject <AWEIMImageProtocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *avatarUrlDark;
@property (copy, nonatomic) NSString *localAvatarID;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *iconUrlDark;
@property (copy, nonatomic) NSString *backgroundUrl;
@property (copy, nonatomic) NSString *backgroundUrlDark;
@property (copy, nonatomic) AWEIMSkylightDotInfoModel *dotInfoModel;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *guideVideo;
@property (copy, nonatomic) NSArray *longPressModels;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) NSDictionary *extraData;
@property (readonly, copy, nonatomic) NSString *promotID;
@property (readonly, copy, nonatomic) NSString *selfAvatar;
@property (readonly, copy, nonatomic) NSString *trackTypeString;
@property (nonatomic) long long version;
@property (nonatomic) long long minVersion;
@property (nonatomic) unsigned long long exitClickCount;
@property (nonatomic) unsigned long long exitShowDays;
@property (nonatomic) unsigned long long exitShowTimes;
@property (readonly, nonatomic) BOOL canShowSelfAvatar;
@property (readonly, nonatomic) BOOL canShowSelfName;
@property (readonly, nonatomic) BOOL canShowRedDot;
@property (nonatomic) unsigned long long bizType;
@property (readonly, nonatomic) unsigned long long avatarSizeType;
@property (readonly, nonatomic) unsigned long long selfAvatarSizeType;

- (id)getContentDict;
- (id)keyForPlaceholder;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
