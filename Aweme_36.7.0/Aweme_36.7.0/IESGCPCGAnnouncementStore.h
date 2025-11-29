@class NSString;

@interface IESGCPCGAnnouncementStore : NSObject <IESGCPDIContextSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)updateCacheForPopup:(id)a0 popupType:(id)a1;
- (BOOL)isTotalLimitReachedForPopup:(id)a0;
- (BOOL)isDailyLimitReachedForPopup:(id)a0;
- (id)cacheKeyForPopup:(id)a0;
- (id)fetchCacheDataForKey:(id)a0;
- (long long)dailyLimitForPopup:(id)a0;
- (long long)totalLimitForPopup:(id)a0;
- (id)cacheKeyForPopup:(id)a0 PopupType:(id)a1;

@end
