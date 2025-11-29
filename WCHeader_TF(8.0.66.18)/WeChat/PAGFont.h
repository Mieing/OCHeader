@class NSString;

@interface PAGFont : NSObject

@property (copy, nonatomic) NSString *fontFamily;
@property (copy, nonatomic) NSString *fontStyle;

+ (id)RegisterFont:(id)a0;
+ (id)RegisterFont:(id)a0 family:(id)a1 style:(id)a2;
+ (id)RegisterFont:(void *)a0 size:(unsigned long long)a1;
+ (id)RegisterFont:(void *)a0 size:(unsigned long long)a1 family:(id)a2 style:(id)a3;
+ (void)UnregisterFont:(id)a0;

- (void)dealloc;

@end
