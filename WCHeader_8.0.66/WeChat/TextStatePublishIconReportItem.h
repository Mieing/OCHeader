@class NSString;

@interface TextStatePublishIconReportItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *iconId;
@property (retain, nonatomic) NSString *iconCustomDescription;
@property (nonatomic) unsigned int iconType;
@property (nonatomic) unsigned int isFromRecentUse;
@property (nonatomic) unsigned int isFromRecommend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_iconCustomDescription;
+ (void)PBArrayAdd_iconType;
+ (void)PBArrayAdd_isFromRecentUse;
+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)getPBPropertyTable;
- (id)initWithIcon:(id)a0;
- (void).cxx_destruct;

@end
