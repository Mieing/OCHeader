@class NSArray, NSString, AWEURLModel;

@interface AWEToutiaoReadingBarModel : AWEBaseApiModel

@property (readonly, copy, nonatomic) NSArray *spareOpenSchemas;
@property (copy, nonatomic) NSString *articleID;
@property (retain, nonatomic) AWEURLModel *iconURLModel;
@property (copy, nonatomic) NSString *articleTitle;
@property (copy, nonatomic) NSString *articleOpenURL;
@property (copy, nonatomic) NSString *extraParamsStr;
@property (copy, nonatomic) NSString *openAppSchema;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *abParam;
@property (nonatomic) BOOL disableDisplay;
@property (nonatomic) BOOL disableDisplayBarInner;

+ (id)iconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
