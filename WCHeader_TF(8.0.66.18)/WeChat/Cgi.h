@interface Cgi : NSObject

+ (id)send:(int)a0 request:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
+ (id)send:(int)a0 requestData:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;

@end
