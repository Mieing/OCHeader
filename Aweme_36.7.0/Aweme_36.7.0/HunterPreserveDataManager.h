@class NSMutableDictionary, NSString, UIView, NSMutableArray;
@protocol HunterPreserveDataDelegate, HunterContainerProtocol;

@interface HunterPreserveDataManager : NSObject <HunterPreserveDataManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *preservedData;
@property (weak, nonatomic) UIView<HunterContainerProtocol> *hunterContainer;
@property (retain, nonatomic) NSMutableArray *identifiers;
@property (weak, nonatomic) id<HunterPreserveDataDelegate> delegate;
@property (nonatomic) unsigned long long getDataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preserveData;
- (void)setPreserveData:(id)a0;
- (void)__addObserveForPreserveData;
- (void).cxx_destruct;
- (id)init;
- (void)updateContainer:(id)a0;

@end
