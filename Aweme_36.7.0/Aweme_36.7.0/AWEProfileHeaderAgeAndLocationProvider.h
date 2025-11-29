@class NSString;

@interface AWEProfileHeaderAgeAndLocationProvider : NSObject <AWEProfileHeaderSectionProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sectionViewModelClass;
+ (BOOL)shouldShowIPLabelWithContext:(id)a0;
+ (BOOL)shouldShowSchoolWithContext:(id)a0;
+ (BOOL)shouldShowAgeWithContext:(id)a0;
+ (BOOL)shouldShowGenderWithContext:(id)a0;
+ (BOOL)shouldShowLocationWithContext:(id)a0;
+ (BOOL)shouldShowChannelInfoWithContext:(id)a0;
+ (id)locationStringWithContext:(id)a0;
+ (Class)sectionControllerClass;
+ (BOOL)shouldShowSectionWithContext:(id)a0;


@end
