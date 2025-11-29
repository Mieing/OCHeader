@class NSString, NSDictionary;

@interface AWEPerfFPSSubsceneKey : NSObject <NSCopying> {
    unsigned long long _hash;
    NSString *_name;
    NSDictionary *_extra;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
