@class NSString;

@interface WCSessionVCStackItem : MMObject

@property (retain, nonatomic) NSString *pageName;
@property (nonatomic) unsigned long long hashCode;

- (id)toString;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqual:(id)a0 hashCode:(unsigned long long)a1;
- (void).cxx_destruct;

@end
