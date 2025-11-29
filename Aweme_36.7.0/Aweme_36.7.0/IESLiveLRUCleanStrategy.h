@class NSNumber, NSMutableDictionary, NSString;
@protocol IESLiveEffectCleanDelegate;

@interface IESLiveLRUCleanStrategy : NSObject <IESLiveEffectCleanStrategyProtocol>

@property (retain, nonatomic) NSMutableDictionary *trigerCleanerTimeRecordMap;
@property (retain, nonatomic) NSNumber *cleanDuration;
@property (weak, nonatomic) id<IESLiveEffectCleanDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
