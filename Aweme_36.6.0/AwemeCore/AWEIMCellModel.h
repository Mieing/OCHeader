@class NSString;

@interface AWEIMCellModel : NSObject <NSCopying>

@property (retain, nonatomic) NSString *cellIdentifier;
@property (retain, nonatomic) id model;
@property (retain, nonatomic) id context;

- (id)initWithCellIdentifier:(id)a0 model:(id)a1 context:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
