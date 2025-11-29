@interface LSSNSError : NSObject

+ (id)nodeProberErrorWithCode:(long long)a0 description:(id)a1;
+ (id)nodeProberErrorWithCode:(long long)a0 originalError:(id)a1;
+ (id)nodeProberErrorWithCode:(long long)a0 userInfo:(id)a1;

@end
