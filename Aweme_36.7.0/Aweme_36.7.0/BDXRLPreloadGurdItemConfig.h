@class NSString, BDXPreloadStrategy;

@interface BDXRLPreloadGurdItemConfig : NSObject <BDXPreloadConfigItemProtocol>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) BDXPreloadStrategy *strategy;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *channel;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
