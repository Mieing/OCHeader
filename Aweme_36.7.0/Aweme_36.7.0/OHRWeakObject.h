@class NSObject;
@protocol OHRServiceDelegate;

@interface OHRWeakObject : NSObject

@property (weak, nonatomic) NSObject<OHRServiceDelegate> *weakDelegate;

- (void).cxx_destruct;

@end
