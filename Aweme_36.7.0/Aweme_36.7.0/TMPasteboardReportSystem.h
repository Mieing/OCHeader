@class NSString;

@interface TMPasteboardReportSystem : NSObject <TMSystem>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)postInvoke:(id)a0;
- (id)buildEventData:(id)a0;
- (id)name;

@end
