@class NSString;

@interface AWEAnnieXWebStandardEventService : HTSService <AWEAnnieXWebStandardEventService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onNavigationBarItemClick:(id)a0 extra:(id)a1;
- (void)onShareCompletion:(id)a0 extra:(id)a1;
- (void)onContainerCloseWithSchemaParams:(id)a0 extra:(id)a1;
- (void)onContainerEnter:(id)a0 schemaParams:(id)a1 extra:(id)a2;
- (void)onPageLoadFinish:(id)a0 schemaParams:(id)a1 extra:(id)a2;
- (void)onPageLoadFailed:(id)a0 schemaParams:(id)a1 extra:(id)a2;
- (void)onLongPressTextWithContainer:(id)a0 schemaParams:(id)a1 extra:(id)a2;
- (void)onLongPressImageWithContainer:(id)a0 schemaParams:(id)a1 extra:(id)a2;

@end
