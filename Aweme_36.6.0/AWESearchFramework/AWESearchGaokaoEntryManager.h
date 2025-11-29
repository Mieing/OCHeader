@class NSString;

@interface AWESearchGaokaoEntryManager : NSObject <AWESearchGaokaoEntryManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (id)getIconWithState:(unsigned long long)a0 theme:(long long)a1;
+ (long long)getGaokaoEntryFoldDays;
+ (BOOL)enableSearchBarNewStyle;
+ (id)createGaokaoEntryView;
+ (void)gaokaoEntryDidShowOnMain;
+ (void)gaokaoEntryDidClickOnMain;
+ (BOOL)gaokaoMainEntryShouldStayFold;
+ (void)trackGaokaoEntryShowWithEnterFrom:(id)a0 buttonPosition:(id)a1 showState:(id)a2 extra:(id)a3;
+ (void)trackGaokaoEntryClickWithEnterFrom:(id)a0 buttonPosition:(id)a1 showState:(id)a2 extra:(id)a3;
+ (void)updateEntryModel;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;

@end
