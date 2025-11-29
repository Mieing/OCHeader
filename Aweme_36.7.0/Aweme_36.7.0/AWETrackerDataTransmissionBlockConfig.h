@class NSString;

@interface AWETrackerDataTransmissionBlockConfig : NSObject

@property (nonatomic) BOOL forAll;
@property (copy, nonatomic) NSString *sourceClass;
@property (nonatomic) unsigned long long sourceAddr;
@property (copy, nonatomic) NSString *attachedObjClass;
@property (nonatomic) unsigned long long attachedObjAddr;
@property (weak, nonatomic) id source;
@property (weak, nonatomic) id attachedObj;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) id /* block */ block;

+ (id)config;

- (id)infoBuilder;
- (void).cxx_destruct;
- (id)init;

@end
