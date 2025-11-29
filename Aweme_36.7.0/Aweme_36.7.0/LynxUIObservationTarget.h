@class IntersectionObserverEntry, LynxUI;

@interface LynxUIObservationTarget : NSObject

@property (weak, nonatomic) LynxUI *ui;
@property (nonatomic) long long jsCallbackId;
@property (retain, nonatomic) IntersectionObserverEntry *entry;

- (void).cxx_destruct;

@end
