@class RACSignal, NSString, RACSubject;

@interface ACCQuickStoryRecordViewModel : NSObject <ACCQuickStoryRecordService>

@property (retain, nonatomic) RACSubject *hideRecordHintLabelSubject;
@property (retain, nonatomic) RACSignal *hideRecordHintLabelSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendSignal_hideRecordHintLabelWithToken:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
