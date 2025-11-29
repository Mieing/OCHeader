@class AWESearchDynamicEngine, NSString, NSDictionary, UIView, AWEDynamicPatchModel;

@interface AWESearchHistoryComponent : NSObject <AWESearchDynamicEngineDelegate>

@property (nonatomic) double containerWidth;
@property (retain, nonatomic) AWEDynamicPatchModel *dynamicPatch;
@property (retain, nonatomic) AWESearchDynamicEngine *dynamicEngine;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *cardTypeName;
@property (copy, nonatomic) NSDictionary *context;
@property (retain, nonatomic) UIView *historyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)historyCommonSchema;
- (id)historyCardTypeName;
- (void)configHistoryContainer;
- (id)historyItemCommonParams;
- (id)historyItemGlobalProps;
- (id)initWithContainerWidth:(double)a0 context:(id)a1;
- (void)updateHistoryView;
- (void)sendHistoryEvent:(unsigned long long)a0 params:(id)a1;
- (void)updateHistoryData:(id)a0;
- (void).cxx_destruct;

@end
