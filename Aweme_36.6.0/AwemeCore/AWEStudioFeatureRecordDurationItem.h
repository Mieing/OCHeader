@class NSString;

@interface AWEStudioFeatureRecordDurationItem : AWEStudioFeatureStatusBaseItem <AWEStudioFeatureRecordDurationItemProtocol>

@property (nonatomic) unsigned long long defaultIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStorage:(id)a0 persistenceKey:(id)a1 defaultIndex:(unsigned long long)a2;
- (unsigned long long)getDurationIndex;
- (void)saveDurationIndex:(unsigned long long)a0;

@end
