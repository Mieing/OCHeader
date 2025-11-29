@class NSArray, NSString, NSDictionary, AWESearchAnchorUIInfoModel;

@interface AWESearchAnchorListModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *words;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *hintText;
@property (copy, nonatomic) NSString *respFrom;
@property (nonatomic) BOOL hideWords;
@property (copy, nonatomic) NSString *extraInfoString;
@property (copy, nonatomic) NSDictionary *extraInfoDic;
@property (copy, nonatomic) NSDictionary *logExtraInfo;
@property (copy, nonatomic) NSString *logExtraInfoString;
@property (nonatomic) long long barType;
@property (retain, nonatomic) AWESearchAnchorUIInfoModel *uiInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wordsJSONTransformer;
+ (id)extraInfoDicJSONTransformer;
+ (id)uiInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
