@class NSError, CachalotNextOperationConfig, NSArray;

@interface CachalotStructUpdateTransactionResult : NSObject

@property (nonatomic) BOOL success;
@property (nonatomic) BOOL reverted;
@property (nonatomic) BOOL hasEffect;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) CachalotNextOperationConfig *failOperationConfig;
@property (copy, nonatomic) NSArray *insertNodes;
@property (copy, nonatomic) NSArray *deleteNodes;
@property (copy, nonatomic) NSArray *rebindNodes;
@property (copy, nonatomic) NSArray *updateHeightNodes;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL reverted;
@property (nonatomic) BOOL hasEffect;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) CachalotNextOperationConfig *failOperationConfig;
@property (copy, nonatomic) NSArray *insertNodes;
@property (copy, nonatomic) NSArray *deleteNodes;
@property (copy, nonatomic) NSArray *rebindNodes;
@property (copy, nonatomic) NSArray *updateHeightNodes;

- (void).cxx_destruct;

@end
