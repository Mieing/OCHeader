@class AEKBaseData;
@protocol AEKSubscriberProvider;

@interface AEKBaseRuntimeEditor : NSObject

@property (retain, nonatomic) AEKBaseData *baseData;
@property (weak, nonatomic) id<AEKSubscriberProvider> subscriberProvider;

- (id)initWithData:(id)a0 subscriberProvider:(id)a1;
- (void).cxx_destruct;

@end
