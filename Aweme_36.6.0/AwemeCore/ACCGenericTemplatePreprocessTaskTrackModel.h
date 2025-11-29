@class NSString, NSError, NSDictionary;

@interface ACCGenericTemplatePreprocessTaskTrackModel : NSObject

@property (retain, nonatomic) NSString *templateId;
@property (retain, nonatomic) NSString *nleModelUUID;
@property (retain, nonatomic) NSString *taskType;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL isUsingCache;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *extraTrackInfo;

- (void).cxx_destruct;

@end
