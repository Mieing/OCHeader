@class WAContactMainThreadGetter;

@interface WAContactGetter : NSObject {
    WAContactMainThreadGetter *_mainThreadGetter;
}

@property (nonatomic) unsigned int scene;

+ (void)getWeAppContact:(id)a0 handler:(id /* block */)a1;
+ (void)getWeAppContact:(id)a0 force:(BOOL)a1 handler:(id /* block */)a2;
+ (void)getWeAppContact:(id)a0 version:(unsigned long long)a1 handler:(id /* block */)a2 timeout:(unsigned int)a3;
+ (void)getWeAppContactWithAppid:(id)a0 handler:(id /* block */)a1;
+ (void)getWeAppContactWithAppid:(id)a0 force:(BOOL)a1 handler:(id /* block */)a2;
+ (void)getWeAppContactWithAppid:(id)a0 version:(unsigned long long)a1 handler:(id /* block */)a2 timeout:(unsigned int)a3;
+ (void)getWeAppContactWithAppid:(id)a0 username:(id)a1 handler:(id /* block */)a2;
+ (void)getWeAppContactWithKey:(id)a0 keyType:(unsigned long long)a1 version:(unsigned long long)a2 force:(BOOL)a3 requestSource:(id)a4 handler:(id /* block */)a5 timeout:(unsigned int)a6;

- (void)dealloc;
- (void)getWeAppContactWithKey:(id)a0 type:(unsigned long long)a1 handler:(id /* block */)a2 timeout:(unsigned int)a3;
- (void)getWeAppContactWithKey:(id)a0 type:(unsigned long long)a1 version:(unsigned long long)a2 handler:(id /* block */)a3 timeout:(unsigned int)a4;
- (void)getWeAppContact:(id)a0 handler:(id /* block */)a1;
- (void)getWeAppContact:(id)a0 force:(BOOL)a1 handler:(id /* block */)a2;
- (void)getWeAppContact:(id)a0 version:(unsigned long long)a1 handler:(id /* block */)a2 timeout:(unsigned int)a3;
- (void)getWeAppContactWithAppid:(id)a0 handler:(id /* block */)a1;
- (void)getWeAppContactWithAppid:(id)a0 force:(BOOL)a1 handler:(id /* block */)a2;
- (void)getWeAppContactWithAppid:(id)a0 version:(unsigned long long)a1 handler:(id /* block */)a2 timeout:(unsigned int)a3;
- (void)getWeAppContactWithKey:(id)a0 keyType:(unsigned long long)a1 version:(unsigned long long)a2 force:(BOOL)a3 requestSource:(id)a4 handler:(id /* block */)a5 timeout:(unsigned int)a6;
- (void)mainThread_getWeAppContactWithKey:(id)a0 type:(unsigned long long)a1 version:(unsigned long long)a2 requestSource:(id)a3 handler:(id /* block */)a4 timeout:(unsigned int)a5;
- (void).cxx_destruct;

@end
