@class NSDictionary, NSString;

@interface IESLiveIMBroadcastPacket : NSObject <IESLiveIMPacket>

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
