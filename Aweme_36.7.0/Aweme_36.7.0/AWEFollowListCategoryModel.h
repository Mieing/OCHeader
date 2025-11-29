@class NSString, NSNumber, AWEFollowListPageContext;

@interface AWEFollowListCategoryModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *tag;
@property (nonatomic) BOOL enableBadge;
@property (copy, nonatomic) NSString *frequencyControlKey;
@property (retain, nonatomic) AWEFollowListPageContext *pageContext;

+ (id)JSONKeyPathsByPropertyKey;

- (id)getImageName;
- (id)initWithTitle:(id)a0 schema:(id)a1 tag:(id)a2;
- (void)setupBadgeControl:(int)a0;
- (void).cxx_destruct;

@end
