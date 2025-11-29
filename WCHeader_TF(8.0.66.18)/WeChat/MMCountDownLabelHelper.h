@class NSObject, NSHashTable;
@protocol OS_dispatch_source;

@interface MMCountDownLabelHelper : NSObject

@property (class, readonly) MMCountDownLabelHelper *shareInstance;

@property (retain, nonatomic) NSHashTable *labels;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;

- (id)init;
- (void)addLabel:(id)a0;
- (void)updateLabels;
- (void).cxx_destruct;

@end
