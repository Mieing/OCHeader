@class NSString, NSDictionary;
@protocol ACCPitayaResultParser;

@interface ACCRecordPropRankPitayaInput : NSObject <ACCPitayaInputProtocol>

@property (readonly, nonatomic) NSString *businessName;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL async;
@property (copy, nonatomic) NSString *entrance;
@property (nonatomic) float pendingTimeout;
@property (retain, nonatomic) id<ACCPitayaResultParser> parser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
