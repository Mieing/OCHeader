@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface __RTVAction : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;
@property (retain, nonatomic) id poster;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) unsigned long long handleType;
@property (copy, nonatomic) NSString *uniqueId;

- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
