@class NSString;

@interface IESLLLiveDataCenterShelfSource : NSObject <IESLLLiveDataCenterSource>

@property (copy, nonatomic) NSString *sourceKey;
@property (copy, nonatomic) id /* block */ getModelBlock;
@property (copy, nonatomic) id /* block */ updateCardListBlock;
@property (copy, nonatomic) id /* block */ updateCardListAlsoCloneFlagBlock;
@property (copy, nonatomic) id /* block */ updateDataCompletionBlock;

- (id)initWithSourceKey:(id)a0;
- (void)setData:(id)a0 data:(id)a1 isAppLifeCycle:(BOOL)a2;
- (void).cxx_destruct;
- (id)getData:(id)a0;

@end
