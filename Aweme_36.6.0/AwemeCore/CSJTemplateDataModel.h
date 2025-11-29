@class NSString;

@interface CSJTemplateDataModel : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *templateDataId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) double createDateTimeInterval;
@property (nonatomic) double modifyDateTimeInterval;
@property (nonatomic) double networkTimeout;

- (void)updateCreateDateTime;
- (void)updateModifyDateTime;
- (BOOL)isDynamicType;
- (BOOL)haveDataCache;
- (BOOL)haveURLCache;
- (double)realNetworkTimeout;
- (id)initWithDicitonary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)init;
- (id)modelKey;

@end
