@class NSError;

@interface TIMXOQuery : NSObject

@property (copy, nonatomic) id /* block */ dbExecBlock;
@property (copy, nonatomic) id /* block */ mappingBlock;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long limit;

- (void).cxx_destruct;

@end
