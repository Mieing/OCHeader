@class NSString;

@interface IESECShopPhotoSearchScanParams : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *isSearchButton;
@property (copy, nonatomic) NSString *photoSearchPreviousPage;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *searchEntranceStyle;
@property (copy, nonatomic) NSString *searchType;
@property (copy, nonatomic) NSString *searchEntrance;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *searchChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
