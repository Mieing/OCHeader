@class NSString;

@interface AWECompilationRecommendManager : NSObject <AWECompilationRecommendManagerProtocol>

@property (class, nonatomic) BOOL isCompilationRecommendV3PageUsed;
@property (class, nonatomic) BOOL isImmersiveUserDrag;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNeedImmersiveGuide;
+ (void)recordImmersiveGuideShowCount;
+ (long long)v3GuideShowCount;
+ (long long)immersiveGuideShowCount;
+ (unsigned long long)abV3PlanType;
+ (unsigned long long)abV3ExitType;
+ (BOOL)isNeedV3Guide;
+ (void)recordV3GuideShowCount;


@end
