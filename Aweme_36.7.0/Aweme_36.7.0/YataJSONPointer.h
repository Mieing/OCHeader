@class NSString, NSMutableArray;

@interface YataJSONPointer : NSObject

@property (retain, nonatomic) NSMutableArray *components;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) YataJSONPointer *parent;
@property (readonly, nonatomic) NSString *lastComponent;

+ (BOOL)isValidArrayIndex:(id)a0;
+ (id)emptyPathForJSONPointer;
+ (id)arrayIndexPattern;

- (id)componentWithIndex:(long long)a0;
- (id)initWithPathString:(id)a0;
- (id)appendedWithComponent:(id)a0;
- (id)appendedWithIndex:(unsigned long long)a0;
- (BOOL)isEmptyComponent;
- (void).cxx_destruct;
- (void)enumerateWithBlock:(id /* block */)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithComponents:(id)a0;

@end
