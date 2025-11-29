@class NSString, AWEURLModel;

@interface AWEHotSearchBoardTabModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long entryWordType;
@property (nonatomic) unsigned long long boardType;
@property (copy, nonatomic) NSString *boardSubType;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabHeaderName;
@property (nonatomic) BOOL shouldHideListAndSubTitle;
@property (retain, nonatomic) AWEURLModel *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createDefaultInstance;
+ (id)boardTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)headerIconName;
- (void)initCallBack;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
