@class IESMutablePortraitProducer;

@interface IESCommonClientPortraitProducer : NSObject

@property (retain, nonatomic) IESMutablePortraitProducer *delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
