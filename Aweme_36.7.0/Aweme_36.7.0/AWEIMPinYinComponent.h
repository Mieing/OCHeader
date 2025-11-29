@class NSString, NSMutableArray;

@interface AWEIMPinYinComponent : NSObject

@property (nonatomic) unsigned long long anyItemType;
@property (retain, nonatomic) NSMutableArray *items;
@property (copy, nonatomic) NSString *originalString;
@property (copy, nonatomic) NSString *pinYinString;
@property (copy, nonatomic) NSString *firstPinYinCharacterInEveryItem;

+ (id)pinYinComponentWithType:(unsigned long long)a0;

- (void)addCharacterItem:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
