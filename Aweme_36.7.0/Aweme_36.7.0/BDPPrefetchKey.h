@class NSString, NSURL;

@interface BDPPrefetchKey : NSObject <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL used;
@property (nonatomic) BOOL isPrefetch;
@property (nonatomic) long long mismatchReason;
@property (nonatomic) BOOL isDoing;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *callContainerKey;
@property (copy, nonatomic) NSString *callContainerPath;

- (BOOL)isKeyEqual:(id)a0;
- (id)initWithParam:(id)a0 isPrefetch:(BOOL)a1 type:(long long)a2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
