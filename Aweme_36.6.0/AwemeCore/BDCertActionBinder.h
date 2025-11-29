@interface BDCertActionBinder : NSObject

+ (id)sharedBinder;

- (void)fixEntryActionTypes:(id)a0;
- (id)findBasicInfoByCert:(id)a0;
- (id)ignoredCertDataTypes;
- (id)SDKEntryToActionTypesDict;
- (id)getEntryActionTypesByDataType:(id)a0 entryToken:(id)a1;

@end
