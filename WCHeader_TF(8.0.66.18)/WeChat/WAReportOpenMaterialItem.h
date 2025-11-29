@class NSString;

@interface WAReportOpenMaterialItem : WAReportBaseItem

@property (retain, nonatomic) NSString *session;
@property (nonatomic) unsigned int action_type;
@property (nonatomic) unsigned int scene_type;
@property (nonatomic) unsigned int weapp_sum;
@property (nonatomic) unsigned int weapp_index;
@property (retain, nonatomic) NSString *weapp_id;
@property (retain, nonatomic) NSString *weapp_name;
@property (nonatomic) unsigned int open_type;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
