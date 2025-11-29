@class NSString;

@interface WCFinderLiveShareInstantDiscountActivityExtra : NSObject <NSCoding, PBCoding>

@property (copy, nonatomic) NSString *activityKey;
@property (copy, nonatomic) NSString *coverMaskImageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_activityKey;
+ (void)PBArrayAdd_coverMaskImageURL;
+ (void)initialize;

@end
