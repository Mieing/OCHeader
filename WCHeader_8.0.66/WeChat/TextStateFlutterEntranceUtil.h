@interface TextStateFlutterEntranceUtil : NSObject

+ (id)getTextStateMessageNotifyViewController:(BOOL)a0;
+ (id)getTextStateFriendSquareViewController:(long long)a0 hasRedDot:(BOOL)a1 sessionId:(id)a2;
+ (id)getTextStateChatCardFlutterViewController:(id)a0;
+ (id)createTextStateFlutterInstance:(id)a0 arguments:(id)a1;
+ (BOOL)isShowOnFlutterWithLocalKey:(id)a0 exptKey:(id)a1 defaultExptValue:(int)a2;
+ (BOOL)isTextStateMessageFlutterEntrance;
+ (BOOL)isTextStateJumpFlutterSquarePage;
+ (BOOL)isTextStateChatCardShowOnFlutter;
+ (BOOL)canReadFromTextStateAffDB;

@end
