@interface WCFinderUserActionDataReport : NSObject

+ (void)finderNotInterested:(id)a0 subType:(long long)a1;
+ (void)finderContentFeedback:(id)a0;
+ (void)finderCommentFeedback:(long long)a0 commentUserName:(id)a1 currUI:(id)a2;
+ (void)finderProfileFeedbackUserName:(id)a0 currUI:(id)a1;
+ (void)finderFavoriteAction:(id)a0;
+ (void)finderCommentCloseAction:(id)a0 isClose:(BOOL)a1;
+ (void)finderVideoMuteAction:(id)a0 isMute:(BOOL)a1;
+ (id)feedIDUserNameTypeRecommendReportData:(id)a0;
+ (id)feedIDUserNameRecommendTypeReportData:(id)a0;
+ (id)feedIDUserNameTypeReportData:(id)a0;
+ (id)feedIDUserNameReportData:(id)a0;
+ (id)likeAndCommentReportData:(id)a0;
+ (id)currentLikeAndCommentReportData:(id)a0;
+ (id)friendLikeAndCommentReportData:(id)a0;
+ (id)authorLikeAndCommentReportData:(id)a0;
+ (void)finderSearchBarClickAction:(long long)a0;
+ (void)finderBrowserTrackAtEnterWithContextID:(id)a0;
+ (void)finderBrowserTrackAtCreateWithContextID:(id)a0;
+ (void)finderBrowserTrackAtCGIStratWithContextID:(id)a0;
+ (void)finderBrowserTrackAtCGITypeWithContextID:(id)a0 type:(id)a1;
+ (void)finderBrowserTrackAtCGIEndWithContextID:(id)a0;
+ (void)finderBrowserTrackAtShowResultWithContextID:(id)a0;
+ (void)finderBrowserTrackAtExitWithContextID:(id)a0;
+ (void)finderBrowserTrackWithContextID:(id)a0 action:(id)a1;

@end
