@class NSMutableIndexSet;

@interface QueryFilterResult : NSObject

@property (retain, nonatomic) NSMutableIndexSet *removingIndexSet;
@property (retain, nonatomic) NSMutableIndexSet *queryEncryptIndexSet;
@property (nonatomic) BOOL bodyEncryptEnabled;

- (void).cxx_destruct;

@end
