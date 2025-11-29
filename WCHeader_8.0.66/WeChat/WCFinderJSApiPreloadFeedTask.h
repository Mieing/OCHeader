@class NSSet, NSMutableSet;

@interface WCFinderJSApiPreloadFeedTask : NSObject

@property (retain, nonatomic) NSMutableSet *pending;
@property (retain, nonatomic) NSSet *faileds;
@property (retain, nonatomic) NSSet *fetching;
@property (copy, nonatomic) id /* block */ complete;

+ (id)taskWithIds:(id)a0;

- (void).cxx_destruct;

@end
