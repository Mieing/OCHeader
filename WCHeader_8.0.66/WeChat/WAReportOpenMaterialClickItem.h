@class NSString;

@interface WAReportOpenMaterialClickItem : WAReportBaseItem

@property (retain, nonatomic) NSString *session;
@property (nonatomic) unsigned int weapp_sum;
@property (nonatomic) unsigned int weapp_index;
@property (retain, nonatomic) NSString *weapp_id;
@property (retain, nonatomic) NSString *weapp_name;
@property (nonatomic) unsigned int open_type;
@property (nonatomic) unsigned int item_type;
@property (copy, nonatomic) NSString *device_id;
@property (copy, nonatomic) NSString *device_display_name;
@property (nonatomic) unsigned int device_type;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
