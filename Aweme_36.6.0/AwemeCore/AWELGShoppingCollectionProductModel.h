@class NSString, NSArray;

@interface AWELGShoppingCollectionProductModel : NSObject

@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *priceLabelString;
@property (copy, nonatomic) NSArray *imageUrlList;
@property (copy, nonatomic) NSString *cardJumpSchema;
@property (copy, nonatomic) NSString *searchSchema;
@property (copy, nonatomic) NSString *buttonJumpSchema;
@property (copy, nonatomic) NSString *cartJumpSchema;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *contentSourceType;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long panelType;

- (void).cxx_destruct;

@end
