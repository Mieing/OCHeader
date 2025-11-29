@interface AWETeenFeedDoubleColumnTracker : NSObject

+ (long long)squareContentTypeFromModel:(id)a0;
+ (void)trackSquareLikeWithEnterFrom:(id)a0 groupID:(id)a1 authorID:(id)a2 squareContentType:(long long)a3 reqCnt:(long long)a4 showOrder:(long long)a5;
+ (void)trackSquareLikeCancelWithEnterFrom:(id)a0 groupID:(id)a1 authorID:(id)a2 squareContentType:(long long)a3 reqCnt:(long long)a4 showOrder:(long long)a5;
+ (id)squareContentStringFromModel:(id)a0;
+ (void)trackSquareShowWithEnterFrom:(id)a0 groupID:(id)a1 authorID:(id)a2 squareContentType:(long long)a3 reqCnt:(long long)a4 showOrder:(long long)a5;
+ (void)trackSquareClickWithEnterFrom:(id)a0 groupID:(id)a1 authorID:(id)a2 squareContentType:(long long)a3 reqCnt:(long long)a4 showOrder:(long long)a5;
+ (id)statusFromIsSquare:(BOOL)a0;
+ (id)stringFromSquareContentType:(long long)a0;
+ (void)trackClickHomepageWithIsSquare:(BOOL)a0;
+ (void)trackSquareSwitchCapsuleShowWithIsSquare:(BOOL)a0;
+ (void)trackSquareSwitchCapsuleClickWithIsSquare:(BOOL)a0;
+ (void)trackSquareSwitchButtonShowWithIsSquare:(BOOL)a0;
+ (void)trackSquareSwitchButtonClickWithIsSquare:(BOOL)a0;
+ (void)trackEnterHomepageWithEnterMethod:(id)a0;
+ (void)trackSquareStayTimeWithDuration:(long long)a0 enterFrom:(id)a1;

@end
