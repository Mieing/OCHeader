@interface BXApplogCenter : NSObject

+ (void)onEvent:(id)a0 params:(id)a1;
+ (void)setApplogListener:(id /* block */)a0;
+ (void)onEventJsonString:(id)a0 json:(id)a1;

@end
