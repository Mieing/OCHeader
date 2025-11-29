@class IESPortraitProducerDataManager;

@interface IESMutablePortraitProducer : IESPortraitProducer

@property (retain, nonatomic) IESPortraitProducerDataManager *dataManager;

- (BOOL)containsKey:(id)a0 inTypes:(unsigned long long)a1;
- (void)updatePortrait:(id)a0 value:(id)a1;
- (void)configPortraitKey:(id)a0 config:(id)a1;
- (void)updatePortraitsWithDict:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
