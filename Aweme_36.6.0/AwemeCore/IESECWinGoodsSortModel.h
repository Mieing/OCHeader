@class NSString;

@interface IESECWinGoodsSortModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long sortType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isCurrentTab;
@property (nonatomic) BOOL canReverse;
@property (nonatomic) long long defaultSort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
