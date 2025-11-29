@class IESPortraitProducer;

@interface IESSolariaServerPortraitProducer : NSObject

@property (retain, nonatomic) IESPortraitProducer *delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
