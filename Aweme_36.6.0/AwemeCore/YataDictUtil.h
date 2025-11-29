@interface YataDictUtil : NSObject

+ (void)setValue:(id)a0 forKeyPath:(id)a1 inDict:(id)a2;
+ (id)valueForKeyPath:(id)a0 inDict:(id)a1 isInvalidPath:(BOOL *)a2;
+ (id)valueForKeyPath:(id)a0 inDict:(id)a1;
+ (BOOL)isInvalidKeyPath:(id)a0 inDict:(id)a1;

@end
