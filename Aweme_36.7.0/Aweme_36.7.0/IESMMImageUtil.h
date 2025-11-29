@interface IESMMImageUtil : NSObject

+ (void)detectImage:(id)a0 withAlgorithm:(unsigned long long)a1 timeout:(double)a2 scanType:(unsigned long long)a3 withResultBlock:(id /* block */)a4;
+ (void)detectImage:(id)a0 withScanParam:(id)a1 withResultBlock:(id /* block */)a2;
+ (id)detectImageWithBuffer:(id)a0 withScanParam:(id)a1;
+ (id)detectImage:(id)a0 withScanParam:(id)a1;
+ (id)detectImage:(id)a0 withAlgorithm:(unsigned long long)a1 timeout:(double)a2 scanType:(unsigned long long)a3;

@end
