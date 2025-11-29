@class NSString;

@interface IESLiveStrategyIntArrayOperator : NSObject <Operator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)allNot;
- (BOOL)excuteChValue:(id)a0 withInputValue:(id)a1 op:(id)a2;
- (BOOL)isInputValue:(id)a0 rangeIn:(id)a1;
- (BOOL)isInputValue:(id)a0 notRangeIn:(id)a1;
- (BOOL)isInputValue:(id)a0 contains:(id)a1;
- (BOOL)isInputValue:(id)a0 notContains:(id)a1;
- (BOOL)all;

@end
