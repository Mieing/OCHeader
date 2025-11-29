@class NSString;

@interface BDPPrivacyAccessInfo : NSObject

@property (nonatomic) long long privacyID;
@property (copy, nonatomic) NSString *toolBarIconName;
@property (nonatomic) BOOL delayToolBarAnimation;
@property (copy, nonatomic) NSString *morePanelTitle;
@property (copy, nonatomic) NSString *morePanelIconName;
@property (copy, nonatomic) NSString *permissionName;

+ (id)locationPrivacyInfo;
+ (id)locationPrivacyInfo;
+ (id)microphonePrivacyInfo;
+ (id)microphonePrivacyInfo;

- (void).cxx_destruct;

@end
