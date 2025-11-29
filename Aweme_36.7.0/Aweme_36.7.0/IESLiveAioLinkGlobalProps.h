@class NSString, NSMutableDictionary;

@interface IESLiveAioLinkGlobalProps : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *versionName;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *webcastSdkVersion;
@property (copy, nonatomic) NSString *devicePlatform;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) long long systemFontScale;
@property (copy, nonatomic) NSString *location;
@property (nonatomic) long long isNotch;
@property (nonatomic) long long screenHeight;
@property (nonatomic) long long screenWidth;
@property (retain, nonatomic) NSMutableDictionary *queryItems;
@property (readonly, nonatomic) unsigned long long queryItems_Count;

+ (id)descriptor;

@end
