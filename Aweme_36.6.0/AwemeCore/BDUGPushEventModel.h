@class NSString, NSArray;

@interface BDUGPushEventModel : NSObject

@property (copy, nonatomic) NSString *signalName;
@property (nonatomic) unsigned long long signalType;
@property (nonatomic) long long reportInterval;
@property (retain, nonatomic) NSArray *signalScene;

- (BOOL)canTrigger:(id)a0;
- (void).cxx_destruct;
- (void)trigger;
- (id)initWithDictionary:(id)a0;

@end
