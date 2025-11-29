@class NSString;

@interface FBSDKAppEventsUtility : NSObject

@property (class, readonly, copy, nonatomic) NSString *advertiserID;
@property (class, readonly, nonatomic) unsigned long long advertisingTrackingStatus;
@property (class, readonly, nonatomic) NSString *attributionID;
@property (class, readonly, nonatomic) long long unixTimeNow;
@property (class, readonly, nonatomic) BOOL isDebugBuild;

+ (id)activityParametersDictionaryForEvent:(id)a0 implicitEventsOnly:(BOOL)a1 shouldAccessAdvertisingID:(BOOL)a2;
+ (id)anonymousID;
+ (void)clearLibraryFiles;
+ (void)ensureOnMainThread:(id)a0 className:(id)a1;
+ (id)flushReasonToString:(unsigned long long)a0;
+ (void)logAndNotify:(id)a0;
+ (void)logAndNotify:(id)a0 allowLogAsDeveloperError:(BOOL)a1;
+ (BOOL)matchString:(id)a0 firstCharacterSet:(id)a1 restOfStringCharacterSet:(id)a2;
+ (BOOL)regexValidateIdentifier:(id)a0;
+ (BOOL)validateIdentifier:(id)a0;
+ (void)persistAnonymousID:(id)a0;
+ (id)persistenceFilePath:(id)a0;
+ (id)retrievePersistedAnonymousID;
+ (id)tokenStringToUseFor:(id)a0;
+ (id)getVariable:(id)a0 fromInstance:(id)a1;
+ (id)getNumberValue:(id)a0;
+ (BOOL)isSensitiveUserData:(id)a0;
+ (BOOL)isCreditCardNumber:(id)a0;
+ (BOOL)isEmailAddress:(id)a0;

@end
