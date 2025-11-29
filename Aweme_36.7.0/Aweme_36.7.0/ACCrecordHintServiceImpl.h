@class NSString;
@protocol ACCRecordHintDelegate;

@interface ACCrecordHintServiceImpl : NSObject <ACCRecordHintService>

@property (weak, nonatomic) id<ACCRecordHintDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showHint:(id)a0;
- (void).cxx_destruct;
- (void)dismissWithAnimation:(BOOL)a0;

@end
