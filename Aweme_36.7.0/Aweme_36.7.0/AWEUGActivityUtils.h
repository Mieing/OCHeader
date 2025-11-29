@class NSString;

@interface AWEUGActivityUtils : NSObject <AWEUGActivityUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)activityAvoidGlobal;
+ (id)currentDateStr;
+ (BOOL)shouldHideOpenCardsAlertForAweme:(id)a0;
+ (BOOL)checkCurrentFeedIsAD;
+ (BOOL)checkIfHasAD:(id)a0;
+ (BOOL)currentFeedTabCanShowAlert;
+ (id)currentDateFormatStr;


@end
