@class SECNetDetectEvent;

@interface SECNetDetectTask : NSObject

@property (retain, nonatomic) SECNetDetectEvent *event;

- (id)protect;
- (void)asyncDetect;
- (void)_detect;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;

@end
