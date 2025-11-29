@class NSString;

@interface MJTemplateFinderEventTopicInfo : NSObject <PBCoding, NSCopying>

@property (copy, nonatomic) NSString *creatorNickname;
@property (copy, nonatomic) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_creatorNickname;
+ (void)PBArrayAdd_eventName;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithEventTopicInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
