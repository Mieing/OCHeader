@class IESLiveComponentsTraceItem, NSMutableDictionary;
@protocol IESLiveEnterRoomTraceDelegate;

@interface IESLiveComponentsTraceContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *items;
@property (retain, nonatomic) IESLiveComponentsTraceItem *currentItem;
@property (weak, nonatomic) id<IESLiveEnterRoomTraceDelegate> delegate;
@property (nonatomic) BOOL componentLoading;

- (void)recordIndex:(id)a0 startStage:(unsigned long long)a1;
- (void)recordIndex:(id)a0 endStage:(unsigned long long)a1;
- (void)recordIndex:(id)a0 replaceIndex:(id)a1 originDelete:(BOOL)a2;
- (id)itemWithIndex:(id)a0 traceInfoWithStage:(unsigned long long)a1;
- (id)itemWithIndex:(id)a0;
- (void)recordIndex:(id)a0 category:(id)a1;
- (void)reportIndex:(id)a0;
- (void)recordIndex:(id)a0 enterMehod:(unsigned long long)a1;
- (void)checkThread:(SEL)a0;
- (void)recordIndex:(id)a0 metric:(id)a1;
- (void)recordIndex:(id)a0 extra:(id)a1;
- (id)itemWithIndex:(id)a0 emptyCreate:(BOOL)a1;
- (void).cxx_destruct;
- (void)removeIndex:(id)a0;
- (id)init;
- (void)clearAll;

@end
