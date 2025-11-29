@class NSString, NSMutableSet;

@interface FindFriendRedDotEventSender : NSObject <WCFinderRedDotExt>

@property (retain, nonatomic) NSMutableSet *observingPaths;
@property (copy, nonatomic) id /* block */ redDotValidator;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
