@class NSString, NSError;

@interface AWEGenericTemplateAIGCTaskTrackModel : NSObject

@property (retain, nonatomic) NSString *templateId;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL isUsingCache;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
