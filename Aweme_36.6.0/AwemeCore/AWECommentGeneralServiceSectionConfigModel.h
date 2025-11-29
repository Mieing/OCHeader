@class NSString, NSDictionary;

@interface AWECommentGeneralServiceSectionConfigModel : NSObject

@property (nonatomic) BOOL forbidPublish;
@property (copy, nonatomic) NSString *forbiddenPublishToastContent;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;

@end
