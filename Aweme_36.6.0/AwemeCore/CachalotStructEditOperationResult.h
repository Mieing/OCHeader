@class NSError, NSArray;

@interface CachalotStructEditOperationResult : NSObject

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSArray *insertNodes;
@property (copy, nonatomic) NSArray *deleteNodes;
@property (copy, nonatomic) NSArray *rebindNodes;
@property (copy, nonatomic) NSArray *updateHeightNodes;

- (void).cxx_destruct;

@end
