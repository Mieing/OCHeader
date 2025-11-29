@class NSObject;

@interface MBDictJSObject : MBJSObject

@property (retain, nonatomic) NSObject *data;

- (id)init;
- (id)initWithDict:(id)a0;
- (id)initWithObject:(id)a0;
- (id)get:(id)a0;
- (void)setObject:(id)a0 forName:(id)a1;
- (void)setString:(id)a0 forName:(id)a1;
- (void)setNumber:(double)a0 forName:(id)a1;
- (void)setBoolean:(BOOL)a0 forName:(id)a1;
- (void)setData:(id)a0 forName:(id)a1;
- (void)setArray:(id)a0 forName:(id)a1;
- (void)setDict:(id)a0 forName:(id)a1;
- (id)toString;
- (const char *)toRawString;
- (id)toArrayBuffer;
- (const void *)toRawArrayBuffer:(unsigned long long *)a0;
- (double)toNumber;
- (unsigned int)toUInt32;
- (BOOL)toBoolean;
- (id)toArray;
- (id)toDict;
- (id)description;
- (void).cxx_destruct;

@end
