@class NSString, NSDictionary, NSArray, NSNumber;

@interface IESECLiveGoodsListEntryItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *icon;
@property (retain, nonatomic) NSNumber *iconRadius;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *trackName;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL showSmallLiveWindow;
@property (nonatomic) BOOL showDisclaimer;
@property (retain, nonatomic) NSArray *subEntries;
@property (retain, nonatomic) NSArray *status;
@property (copy, nonatomic) NSDictionary *businessParams;
@property (retain, nonatomic) NSString *schemaParamsType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subEntriesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
