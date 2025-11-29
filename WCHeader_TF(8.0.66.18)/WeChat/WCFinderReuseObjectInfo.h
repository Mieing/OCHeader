@class NSString;

@interface WCFinderReuseObjectInfo : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ factory;
@property (copy, nonatomic) id /* block */ setter;
@property (copy, nonatomic) id /* block */ beforeEnqueue;
@property (copy, nonatomic) id /* block */ prepareForReuse;
@property (nonatomic) BOOL autoCallPrepareForReuse;

- (void).cxx_destruct;

@end
