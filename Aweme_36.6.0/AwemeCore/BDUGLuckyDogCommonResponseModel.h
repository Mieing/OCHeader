@class NSString, NSArray;
@protocol BDUGLuckyDogActivityInfo;

@interface BDUGLuckyDogCommonResponseModel : BDUGLuckyJSONModel

@property (nonatomic) long long settingsVersion;
@property (nonatomic) BOOL isAppLogin;
@property (copy, nonatomic) NSString *actToken;
@property (copy, nonatomic) NSString *actBase;
@property (copy, nonatomic) NSString *actData;
@property (retain, nonatomic) NSArray<BDUGLuckyDogActivityInfo> *activityInfos;

- (void).cxx_destruct;

@end
