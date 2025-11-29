@class NSString;

@interface IESLiveStrategyBooleanOperator : NSObject <Operator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isInputValue:(id)a0 equalTo:(id)a1;
- (BOOL)isInputValue:(id)a0 notEqualTo:(id)a1;
- (BOOL)allNot;
- (BOOL)excuteChValue:(id)a0 withInputValue:(id)a1 op:(id)a2;
- (BOOL)all;

@end
