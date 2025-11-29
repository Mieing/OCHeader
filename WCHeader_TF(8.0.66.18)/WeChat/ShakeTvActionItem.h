@class ShakePayItem, NSString, ShakeProductItem, ShakeUrlItem, NSMutableArray, ShakeUserItem;

@interface ShakeTvActionItem : NSObject <PBCoding, NSCoding, NSCopying>

@property (nonatomic) int actionType;
@property (retain, nonatomic) NSString *commentId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSMutableArray *thumbUrls;
@property (retain, nonatomic) ShakeUserItem *userItem;
@property (retain, nonatomic) ShakePayItem *payItem;
@property (retain, nonatomic) ShakeProductItem *productItem;
@property (retain, nonatomic) ShakeUrlItem *urlItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_actionType;
+ (void)PBArrayAdd_commentId;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_summary;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_thumbUrls;
+ (void)PBArrayAdd_userItem;
+ (void)PBArrayAdd_payItem;
+ (void)PBArrayAdd_productItem;
+ (void)PBArrayAdd_urlItem;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
