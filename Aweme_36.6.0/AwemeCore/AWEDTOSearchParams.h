@class NSString;

@interface AWEDTOSearchParams : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *searchResultId;
@property (copy, nonatomic) NSString *listItemId;
@property (copy, nonatomic) NSString *tokenType;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSString *searchEnterFrom;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
