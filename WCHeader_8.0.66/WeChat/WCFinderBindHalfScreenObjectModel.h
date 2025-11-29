@class NSString, NSHashTable;

@interface WCFinderBindHalfScreenObjectModel : NSObject

@property (retain, nonatomic) NSHashTable *bindObjectHashTable;
@property (copy, nonatomic) NSString *registerKey;
@property (nonatomic) double heightRatio;

- (id)init;
- (void).cxx_destruct;

@end
