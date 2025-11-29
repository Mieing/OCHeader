@class NSString;

@interface UploadRange : NSObject

@property (copy) NSString *rangeId;
@property long long startRange;
@property long long endRange;
@property long long state;
@property (weak) UploadRange *next;

- (id)initWithRange:(long long)a0 end:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
