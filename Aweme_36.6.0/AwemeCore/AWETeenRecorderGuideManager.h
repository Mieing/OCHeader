@class NSString;

@interface AWETeenRecorderGuideManager : NSObject <AWETeenRecorderGuideManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasPublishedPrivateWork;
+ (BOOL)shouldShowPrivateWorkGuidePopover;
+ (void)todayShowedPrivateWorkGuide;
+ (void)showedPrivateWorkPage;
+ (id)AlogPrivateWorkInfo;
+ (id)kAWETeenHasPublishedPrivateWorkKey;
+ (id)kAWETeenPrivateWorkPageShowedKey;
+ (BOOL)isPrivateWorkGuideShowedCountLessThanMaxCount;
+ (BOOL)shouldShowPrivateWorkGuideInToday;
+ (id)kAWETeenPrivateWorkGuideTodayShowedKey;
+ (id)kAWETeenPrivateWorkGuideShowedCountKey;


@end
