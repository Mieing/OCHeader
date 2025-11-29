@class NSString;

@interface AWEDetailCellConfigAISearchStrategy : NSObject <AWEDetailCellConfigStrategyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveStrategyWithContext:(id)a0;

- (id)configureCell:(id)a0 inContext:(id)a1;

@end
