@class NSString, EmoticonCustomCreatePreProcessConfig;

@interface EmoticonCustomCreateTask : NSObject

@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long editorType;
@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) EmoticonCustomCreatePreProcessConfig *preprocessConfig;

+ (id)defaultTask;
+ (id)finderTaskWithFeedId:(id)a0 nonceId:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
