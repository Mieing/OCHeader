@class NSString;

@interface APBDeviceInfo : NSObject

@property (retain, nonatomic) NSString *dtfDeviceToken;

+ (id)getInstance;

- (id)currentVC;
- (id)getApdidToken;
- (BOOL)loadDylib;
- (void).cxx_destruct;
- (long long)languageCode;
- (id)languageName;
- (void)initDeviceInfo;

@end
