@class CMStyleAttributes;

@interface CMAttributeRun : NSObject

@property (readonly, nonatomic) CMStyleAttributes *attributes;
@property (nonatomic) long long orderedListItemNumber;
@property (readonly, nonatomic) BOOL listTight;

- (id)initWithAttributes:(id)a0 orderedListNumber:(long long)a1;
- (void).cxx_destruct;

@end
