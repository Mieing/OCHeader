@class NSString, NSSet;

@interface EcomBcmNode : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSSet *btmSet;
@property (retain, nonatomic) NSSet *preNodes;

- (BOOL)hasPageId:(id)a0;
- (id)initWithDic:(id)a0;
- (void).cxx_destruct;
- (BOOL)isStart;

@end
