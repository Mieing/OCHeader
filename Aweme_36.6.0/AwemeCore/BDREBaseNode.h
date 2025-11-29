@class NSString;

@interface BDREBaseNode : NSObject

@property (retain, nonatomic) NSString *aOriginValue;
@property (nonatomic) unsigned long long wordIndex;
@property (nonatomic) unsigned long long priority;

- (id)initAsBaseNode:(id)a0 index:(unsigned long long)a1;
- (void).cxx_destruct;

@end
