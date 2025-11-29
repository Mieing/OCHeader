@class NSString;

@interface MJTemplateListParams : NSObject

@property (nonatomic) unsigned long long eventId;
@property (copy, nonatomic) NSString *priorityTemplateId;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSString *musicId;

+ (id)defaultParams;

- (void).cxx_destruct;

@end
