@class NSString;

@interface WCFImageKey : NSObject <NSCopying> {
    NSString *_path;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *hashKey;
@property (readonly, nonatomic) NSString *uri;

- (id)initWithType:(long long)a0 key:(id)a1 uri:(id)a2;
- (id)path;
- (id)savedPath;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
