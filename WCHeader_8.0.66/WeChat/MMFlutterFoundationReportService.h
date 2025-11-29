@class NSString;

@interface MMFlutterFoundationReportService : NSObject <FlutterMmdataReportBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)kvReport:(long long)a0 value:(id)a1;
- (void)idKeyReport:(long long)a0 key:(long long)a1 value:(long long)a2;

@end
