@class NSPredicate, NSString;

@interface HTSLiveMessageHandler : NSObject <HTSLiveMessageHandler>

@property (copy, nonatomic) id /* block */ messageHandler;
@property (retain, nonatomic) NSPredicate *predicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
