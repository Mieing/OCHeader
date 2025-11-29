@class NSDictionary, NSMutableArray, UIView;
@protocol BDXPreserveDataDelegate, BDXViewContainerProtocol;

@interface BDXPreserveDataManager : NSObject

@property (copy) NSDictionary *preservedData;
@property (weak, nonatomic) UIView<BDXViewContainerProtocol> *bdxContainer;
@property (retain, nonatomic) NSMutableArray *identifiers;
@property (weak, nonatomic) id<BDXPreserveDataDelegate> delegate;
@property (nonatomic) unsigned long long getDataType;
@property (nonatomic) BOOL shouldOverridePreserveData;

+ (BOOL)enableCommentDiggFunction;

- (id)preserveData;
- (void)setPreserveData:(id)a0;
- (void)updatePreserveDataWithStatusType:(unsigned long long)a0 statusContext:(id)a1;
- (id)__preserveKeyWithType:(unsigned long long)a0;
- (id)__preserveIDWithType:(unsigned long long)a0;
- (void)__observePreserveDataChangedWithType:(unsigned long long)a0 newValue:(id)a1 currentData:(id)a2;
- (void)__addObserveForPreserveData;
- (void)p_observePreserveData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateContainer:(id)a0;

@end
