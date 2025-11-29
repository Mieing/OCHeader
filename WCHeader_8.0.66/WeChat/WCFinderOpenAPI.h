@interface WCFinderOpenAPI : NSObject

+ (BOOL)pushFinderViewControllerFromJSAPIWithCurrentNavController:(id)a0 customParam:(id)a1 extraParams:(id)a2;
+ (void)pushFinderProfileWithExportUserName:(id)a0 currentNavController:(id)a1 cardType:(int)a2 enterScene:(int)a3 functionalParams:(id)a4 reportExtraInfo:(id)a5;
+ (void)pushFinderProfileWithUserName:(id)a0 currentNavController:(id)a1 cardType:(int)a2 enterScene:(int)a3 functionalParams:(id)a4 reportExtraInfo:(id)a5;
+ (void)pushFinderFeedWithFeedId:(id)a0 nonceID:(id)a1 currentNavController:(id)a2 shareScene:(unsigned long long)a3 cardType:(int)a4 functionalParams:(id)a5 reportExtraInfo:(id)a6;
+ (void)pushFinderFeedWithEncrytedId:(id)a0 nonceID:(id)a1 currentNavController:(id)a2 shareScene:(unsigned long long)a3 cardType:(int)a4 functionalParams:(id)a5 reportExtraInfo:(id)a6;
+ (void)pushFinderFeedWithEncrytedId:(id)a0 nonceID:(id)a1 currentNavController:(id)a2 shareScene:(unsigned long long)a3 cardType:(int)a4 requestScene:(int)a5 functionalParams:(id)a6 reportExtraInfo:(id)a7;
+ (void)getFinderContactWithUsername:(id)a0 commentScene:(int)a1 successfulBlock:(id /* block */)a2 failedBlock:(id /* block */)a3;

@end
