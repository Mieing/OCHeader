@interface AWEIMLiveCustomServiceTracker : NSObject

+ (id)roleString:(long long)a0;
+ (id)commonTabParamsFromExtra:(id)a0 role:(long long)a1 isInLive:(BOOL)a2;
+ (id)commonChatParamsFromExtra:(id)a0 con:(id)a1 role:(long long)a2 isInLive:(BOOL)a3;
+ (id)getEnterMethod:(id)a0 isInLive:(BOOL)a1;

@end
