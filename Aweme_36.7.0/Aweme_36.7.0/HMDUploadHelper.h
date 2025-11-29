@class HMDInfo, HMDInjectedInfo, NSString;

@interface HMDUploadHelper : NSObject

@property (retain, nonatomic) HMDInfo *info;
@property (retain, nonatomic) HMDInjectedInfo *injecedInfo;
@property (retain, nonatomic) NSString *currentLanguage;
@property (retain, nonatomic) NSString *currentRegion;
@property (nonatomic) long long currentMillisecondsFromGMT;

+ (id)sharedInstance;

- (id)headerInfo;
- (void).cxx_destruct;
- (id)init;

@end
