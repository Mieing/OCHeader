@class NSString;

@interface AWEDeepLinkParamsManager : NSObject <AWESettingsComboRequestProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)businessParamsInjection;
+ (void)_aweLazyRegisterLoad;
+ (id)settingsRequestParamsDictionary;
+ (id)fixedGetURLForContainer:(id)a0;
+ (id)legacyGetURLForContainer:(id)a0;
+ (id)findActualOutPage:(id)a0;
+ (BOOL)viewControllerNeedsExtraHandle:(id)a0;
+ (id)getLastChild:(id)a0;
+ (id)classesOnAnotherTransitionView;
+ (id)classesNeedsRecursivelyFindResponder;
+ (id)getViewOnAnotherTransitionView:(id)a0;
+ (id)getNextVC:(id)a0;
+ (id)getURLForContainer:(id)a0;
+ (BOOL)isAdvertisingGDLabel:(id)a0;


@end
