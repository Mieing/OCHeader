@class NSString;

@interface WCSTrainModelRoute : NSObject

@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL isLeaf;
@property (nonatomic) unsigned long long eCond;
@property (retain, nonatomic) NSString *nsCondSuffix;
@property (nonatomic) unsigned long long oper;
@property (nonatomic) double value;
@property (retain, nonatomic) NSString *trueKey;
@property (retain, nonatomic) NSString *falseKey;
@property (nonatomic) BOOL isExtBooster;

- (BOOL)parseCondByCond1:(id)a0 cond2:(id)a1;
- (int)binaryValueIfMatchCondSuffix:(id)a0;
- (void).cxx_destruct;

@end
