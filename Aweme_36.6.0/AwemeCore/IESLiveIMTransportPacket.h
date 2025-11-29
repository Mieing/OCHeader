@class NSString, NSDictionary;

@interface IESLiveIMTransportPacket : NSObject <IESLiveIMTransportPacket>

@property (copy, nonatomic) NSString *globalExt;
@property (nonatomic) long long fetchType;
@property (nonatomic) long long fetchInterval;
@property (copy, nonatomic) NSString *pushServer;
@property (copy, nonatomic) NSDictionary *routeParams;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) NSDictionary *extra;
@property (nonatomic) long long pid;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateExtraWithKey:(id)a0 value:(id)a1;
- (void).cxx_destruct;

@end
