@class NSString, NSDictionary;

@interface AWEShareLinkModel : NSObject

@property (copy, nonatomic) NSString *textForCopy;
@property (copy, nonatomic) NSString *textFormatForCopy;
@property (copy, nonatomic) NSString *reportUrl;
@property (copy, nonatomic) NSString *reportSchema;
@property (copy, nonatomic) NSString *belong;
@property (copy, nonatomic) NSString *descriptionPrefix;
@property (nonatomic) BOOL shouldGetPersistentShortURL;
@property (copy, nonatomic) NSDictionary *activityInfo;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
