@class NSString, NSArray;

@interface FurionSmartServicePortraitConditionItem : NSObject

@property (retain, nonatomic) NSString *portraitName;
@property (nonatomic) BOOL reverse;
@property (retain, nonatomic) NSArray *inConditions;
@property (retain, nonatomic) NSArray *rangeConditions;

- (BOOL)passTestWithPortraitGetter:(id /* block */)a0;
- (id)initWithJSONConfigDict:(id)a0;
- (void).cxx_destruct;

@end
