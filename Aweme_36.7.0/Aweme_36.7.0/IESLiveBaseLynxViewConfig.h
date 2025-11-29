@class NSString, NSDictionary;

@interface IESLiveBaseLynxViewConfig : NSObject

@property (copy, nonatomic) NSString *fallbackURL;
@property (copy, nonatomic) NSString *page;
@property (retain, nonatomic) NSDictionary *initialData;
@property (nonatomic) BOOL showLoading;
@property (nonatomic) BOOL showError;

- (void).cxx_destruct;

@end
