@class NSString, NSMutableArray, NSDateFormatter;

@interface HMDUIFrozenAnimationRecorder : NSObject <HMDUIFrozenAnimationProtocol> {
    unsigned long long _maxRecords;
    NSDateFormatter *_formatter;
}

@property (retain, nonatomic) NSMutableArray *records;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)transitionRecord;
- (void)transitionType:(id)a0 sourceVC:(id)a1 targertVC:(id)a2 sourceView:(id)a3 targetView:(id)a4 animated:(BOOL)a5;
- (void)addRecord:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
