@class NSString, NSArray;

@interface BDPStarkModel : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *index;
@property (retain, nonatomic) NSString *debugUrl;
@property (copy, nonatomic) NSString *indexForBrowser;
@property (nonatomic) BOOL enableDebug;
@property (nonatomic) BOOL usingLocal;
@property (nonatomic) BOOL loadInner;
@property (nonatomic) BOOL canUseLocalNet;
@property (nonatomic) BOOL useHighPerformancePlus;
@property (copy, nonatomic) NSString *odrCodesVersion;
@property (copy, nonatomic) NSString *odrCodesMd5;
@property (copy, nonatomic) NSString *odrCodesTag;
@property (nonatomic) long long odrCodesLength;
@property (copy, nonatomic) NSString *menuButtonStyle;
@property (nonatomic) long long versionCode;
@property (copy, nonatomic) NSString *versionType;
@property (copy, nonatomic) NSString *versionMark;
@property (copy, nonatomic) NSArray *graphicsDeviceType;

+ (id)getSCModel:(id)a0 error:(id *)a1;

- (void).cxx_destruct;

@end
