@class NSString;

@interface WAEJFontDescriptor : NSObject {
    unsigned long long sumhash;
}

@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) float size;
@property (readonly, nonatomic) float weight;
@property (readonly, nonatomic) BOOL bold;
@property (readonly, nonatomic) BOOL italic;

+ (id)descriptorWithParmas:(id)a0;

- (void)replaceAll:(void *)a0 from:(const void *)a1 to:(const void *)a2;
- (void)fontParse:(void *)a0;
- (void)weightParse:(const void *)a0;
- (unsigned long long)sumHash;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
