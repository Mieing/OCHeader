@class NSString, NSArray;

@interface GameMultiOptionItem : NSObject

@property (retain, nonatomic) NSString *debugKey;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *optionAndDescArray;
@property (copy, nonatomic) id /* block */ didSetOptionBlock;
@property (nonatomic) BOOL hasClearOption;

- (id)initWithDebugKey:(id)a0 title:(id)a1 optionAndDescArray:(id)a2;
- (id)initWithDebugKey:(id)a0 title:(id)a1 optionAndDescArray:(id)a2 hasClearOption:(BOOL)a3;
- (id)currentValue;
- (void)setDebugValueAtIndex:(long long)a0;
- (id)descForOptionValue:(id)a0;
- (void).cxx_destruct;

@end
