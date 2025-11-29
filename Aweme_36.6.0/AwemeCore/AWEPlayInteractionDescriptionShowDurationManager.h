@interface AWEPlayInteractionDescriptionShowDurationManager : NSObject

+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEPlayInteractionDescriptionElementAdapterClass;
+ (id)sharedInstance;

- (id)aAWEPlayInteractionAdapter;
- (id)aAWEPlayInteractionDescriptionElementAdapter;
- (BOOL)shouldShowDurationWithModel:(id)a0 referString:(id)a1 enterFrom:(id)a2;
- (id)getVideoFormatDurationStringWithModel:(id)a0 descriptionLabelFont:(id)a1 contentMode:(long long)a2;
- (id)getVideoDurationAccessibilityStringWithAweme:(id)a0;
- (BOOL)enableShowDuration;

@end
