@class NSString;

@interface WAReportWidgetIDKeyItem : WAReportWidgetBaseItem

@property (nonatomic) unsigned int idkey_id;
@property (nonatomic) unsigned int idkey_key;
@property (nonatomic) unsigned int idkey_value;
@property (nonatomic) unsigned int serviceType;
@property (retain, nonatomic) NSString *searchQuery;
@property (retain, nonatomic) NSString *extParams;
@property (retain, nonatomic) NSString *srcAppid;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
