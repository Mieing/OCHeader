@class NSString, DIRSContext;
@protocol IRISEventSerializer;

@interface DIRSEventListener : DIRSBasicModule <IRISModule, IRISEventListener> {
    id<IRISEventSerializer> serializer;
    BOOL observeEnabled;
    BOOL isLogOn;
}

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)moduleVersion;

- (void)notifyEventsDropped:(id)a0 withOptions:(id)a1 withError:(id)a2;
- (void)notifyEventsStored:(id)a0 withOptions:(id)a1;
- (void)notifyEventsUploaded:(id)a0 withOptions:(id)a1;
- (void)notifyEventsAccepted:(id)a0 withOptions:(id)a1;
- (void)_formatObservedEvent:(id)a0 to:(id)a1 ignoreProperties:(BOOL)a2;
- (void).cxx_destruct;
- (void)commonInit;
- (void)run;

@end
