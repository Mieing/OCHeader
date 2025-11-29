@class AWESiriPlayletVideoInfoModel, NSString, NSArray, AWESiriCompilationVideoInfoModel, NSNumber;

@interface AWESiriMediaIntentsModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *videoPlayProgress;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *mediaDescription;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *coverURL;
@property (copy, nonatomic) NSArray *coverURLList;
@property (copy, nonatomic) NSArray *playURLList;
@property (copy, nonatomic) NSString *jumpScheme;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) AWESiriCompilationVideoInfoModel *compilationInfo;
@property (retain, nonatomic) AWESiriPlayletVideoInfoModel *playletInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playletInfoJSONTransformer;
+ (id)compilationInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
