@class NSString;

@interface AWEProfileEditAlertManager : NSObject <AWEAlertProtocol, AWEProfileEditAlertManagerProtocol>

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addAlertWithPath:(id)a0 enterFrom:(id)a1 event:(id)a2;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (void)onAlertCanceledWithContext:(id)a0;
- (BOOL)satifiedInteval;
- (id)titleSuffix;
- (BOOL)needNickname;
- (BOOL)needAvatar;
- (long long)sceneForPath:(id)a0;
- (void)updateUnFillDate;
- (void)updateUnEditTimes;
- (long long)unEditTimes;
- (id)lastUnFillDate;
- (void).cxx_destruct;
- (id)title;
- (id)titlePrefix;

@end
