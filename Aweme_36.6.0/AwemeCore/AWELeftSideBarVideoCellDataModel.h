@class NSString, NSArray;

@interface AWELeftSideBarVideoCellDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *entryId;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSArray *coversUrl;
@property (copy, nonatomic) NSString *authorId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
