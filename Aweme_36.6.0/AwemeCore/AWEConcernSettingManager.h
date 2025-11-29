@class NSString;

@interface AWEConcernSettingManager : NSObject <AWEConcernSettingManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldAdaptBigFontModeForRelationList;
+ (BOOL)shouldAdaptBigFontModeForRelationListElaborately;


@end
