@class NSString, NSDictionary;

@interface AWEBarPanelDetailConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL shouldLoadPrevious;
@property (nonatomic) BOOL shouldShrinkVideoWhenPanelShow;
@property (nonatomic) BOOL openPanelWhenEnter;
@property (nonatomic) long long initialIndex;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *videoEnterMethod;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *ancestorEnterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *videoPlayMethod;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
