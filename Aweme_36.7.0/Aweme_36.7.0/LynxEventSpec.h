@class NSString;

@interface LynxEventSpec : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL shouldCaptureBubble;
@property (nonatomic) BOOL shouldCaptureCatch;
@property (nonatomic) BOOL interestedInBubble;
@property (nonatomic) BOOL interestedInCatch;
@property (nonatomic) BOOL shouldLepusCaptureBubble;
@property (nonatomic) BOOL shouldLepusCaptureCatch;
@property (nonatomic) BOOL interestedInLepusBubble;
@property (nonatomic) BOOL interestedInLepusCatch;

+ (id)convertRawEvents:(id)a0 andRwaLepusEvents:(id)a1;

- (id)initWithRawEvent:(id)a0 withJSEvent:(BOOL)a1;
- (void)composeWithOtherSpec:(id)a0;
- (void).cxx_destruct;

@end
