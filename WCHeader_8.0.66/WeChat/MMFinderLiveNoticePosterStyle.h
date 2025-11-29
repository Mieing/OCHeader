@class NSString;

@interface MMFinderLiveNoticePosterStyle : NSObject

@property (retain, nonatomic) NSString *styleId;
@property (nonatomic) unsigned long long backgroundType;
@property (retain, nonatomic) NSString *backgroundColorHexCode;
@property (retain, nonatomic) NSString *backgroundImageUri;
@property (retain, nonatomic) NSString *foregroundColorHexCode;
@property (retain, nonatomic) NSString *brandLogoColorHexCode;
@property (retain, nonatomic) NSString *verificationIconUri;
@property (nonatomic) BOOL isFallback;

+ (id)styleWithBackendModel:(id)a0;
+ (id)fallbackStyle;

- (void).cxx_destruct;

@end
