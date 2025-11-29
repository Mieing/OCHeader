@class NSString;
@protocol NSObject;

@interface AWERxModule : NSObject <NSCopying>

@property (readonly, nonatomic) id<NSObject> unique;
@property (readonly, copy, nonatomic) NSString *moduleName;

- (id)initWithModuleName:(id)a0 unique:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
