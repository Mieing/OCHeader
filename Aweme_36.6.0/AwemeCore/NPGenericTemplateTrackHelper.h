@class NSString, NSMutableDictionary;

@interface NPGenericTemplateTrackHelper : NSObject <NPMonitorDelegate>

@property (retain, nonatomic) NSMutableDictionary *trackDict;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
