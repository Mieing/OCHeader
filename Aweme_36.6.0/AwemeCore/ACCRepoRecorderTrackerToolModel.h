@class NSString, NSMutableDictionary;

@interface ACCRepoRecorderTrackerToolModel : NSObject <AWERepositoryDraftProtocol, NSCopying, ACCComponentLogDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *componentTimeDic;
@property (nonatomic) double totalCostTime;
@property (nonatomic) unsigned long long componentCounts;
@property (nonatomic) double firstLoadTimeInterval;
@property (nonatomic) long long musicDownloadDuration;
@property (nonatomic) long long effectDownloadDuration;
@property (nonatomic) long long videoDownloadDuration;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *stickerID;
@property (retain, nonatomic) NSString *moneyLeftWelfareActivityID;
@property (retain, nonatomic) NSString *publishWelfareActivityID;
@property (nonatomic) BOOL hasAuthority;
@property (nonatomic) double pageLoadUICost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
