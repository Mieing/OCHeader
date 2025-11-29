@class NSString, BDUGLuckyCrossoverGuideConfig;

@interface BDUGLuckyCrossoverGuideModel : BDUGLuckyJSONModel

@property (nonatomic) BOOL enableShowGuide;
@property (copy, nonatomic) NSString *domainId;
@property (nonatomic) long long frequencyControlType;
@property (retain, nonatomic) BDUGLuckyCrossoverGuideConfig *guideConfig;

- (void).cxx_destruct;

@end
