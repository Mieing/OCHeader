@class NSString, NSDictionary;

@interface AWEUGMaterialAdvertisingInfo : NSObject

@property (copy, nonatomic) NSString *originURLString;
@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *scheme;
@property (nonatomic) BOOL isJumpPopview;
@property (retain, nonatomic) NSDictionary *guidePopup;
@property (nonatomic) BOOL isFallbackScheme;
@property (nonatomic) long long continueType;
@property (retain, nonatomic) NSDictionary *popupsInfo;

- (void).cxx_destruct;

@end
