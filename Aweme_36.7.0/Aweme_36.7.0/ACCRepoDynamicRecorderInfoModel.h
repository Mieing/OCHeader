@class NSString, NSDictionary, NSArray;

@interface ACCRepoDynamicRecorderInfoModel : NSObject <AWERepositoryDraftProtocol, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *dynamicLynxData;
@property (copy, nonatomic) NSString *schemaModeId;
@property (copy, nonatomic) NSDictionary *originActivityInfo;
@property (copy, nonatomic) NSString *dynamicActivityID;
@property (copy, nonatomic) NSDictionary *lynxSchema;
@property (copy, nonatomic) NSString *dynamicRecordSchema;
@property (copy, nonatomic) NSString *activitySchema;
@property (nonatomic) BOOL isDynamicRecorder;
@property (nonatomic) long long dynamicRecordTemplateType;
@property (nonatomic) long long dynamicRecordFirstFrameStartTime;
@property (copy, nonatomic) NSString *activityAnchorItemId;
@property (copy, nonatomic) NSArray *dynamicRecorderMentionedUsers;
@property (copy, nonatomic) NSArray *dynamicRecorderHashTags;
@property (nonatomic) BOOL showPublishEndPage;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiName;

@end
