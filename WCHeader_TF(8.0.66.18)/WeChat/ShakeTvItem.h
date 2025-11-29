@class NSString, NSMutableArray;

@interface ShakeTvItem : NSObject <PBCoding, NSCoding, NSCopying>

@property (retain, nonatomic) NSString *tvId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *playUrl;
@property (retain, nonatomic) NSString *playStatid;
@property (retain, nonatomic) NSString *actionUrl;
@property (retain, nonatomic) NSString *actionStatid;
@property (retain, nonatomic) NSString *shareUrl;
@property (retain, nonatomic) NSMutableArray *actionLists;
@property (nonatomic) BOOL isAutoplay;
@property (retain, nonatomic) NSString *subTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tvId;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_playUrl;
+ (void)PBArrayAdd_playStatid;
+ (void)PBArrayAdd_actionUrl;
+ (void)PBArrayAdd_actionStatid;
+ (void)PBArrayAdd_shareUrl;
+ (void)PBArrayAdd_topic;
+ (void)PBArrayAdd_actionLists;
+ (void)PBArrayAdd_isAutoplay;
+ (void)PBArrayAdd_subTitle;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)toXml;
- (void).cxx_destruct;

@end
