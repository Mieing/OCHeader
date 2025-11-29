@class NSMutableDictionary;

@interface AWEBootTaskMaker : NSObject

@property (class, readonly) id /* block */ make;

@property (retain, nonatomic) NSMutableDictionary *data;
@property (readonly) id /* block */ desc;
@property (readonly) id /* block */ uniqueId;
@property (readonly) id /* block */ mainThread;
@property (readonly) id /* block */ validExist;
@property (readonly) id /* block */ qos;
@property (readonly) id /* block */ delay;
@property (readonly) id /* block */ enabled;
@property (readonly) id /* block */ invalidTargets;
@property (readonly) id /* block */ validTargets;

+ (void)setDelayOrForbidTaskConfig:(id)a0;
+ (void)setChangeTaskQosConfig:(id)a0;
+ (unsigned int)qosForConfig:(id)a0;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)init;

@end
