@class NSDictionary, NSString;

@interface IESECLynxCardURLParams : NSObject

@property (nonatomic) BOOL disableLoadingWhenNotAllOnUI;
@property (nonatomic) BOOL allowOverBounds;
@property (nonatomic) long long threadStrategy;
@property (copy, nonatomic) NSDictionary *allQueryDict;
@property (nonatomic) BOOL useRestDataToUpdateItemModel;
@property (copy, nonatomic) NSString *cardTemplateName;
@property (copy, nonatomic) NSString *surl;

- (void).cxx_destruct;

@end
