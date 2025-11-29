@class NSString, NSMutableSet;

@interface ContactProfileRecommEnxposureItem : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableSet *setEnxposureRemark;
@property (retain, nonatomic) NSMutableSet *setEnxposurePhone;
@property (retain, nonatomic) NSMutableSet *setEnxposureImageMsgLocalId;
@property (nonatomic) unsigned int enxposureCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_setEnxposureRemark;
+ (void)PBArrayAdd_setEnxposurePhone;
+ (void)PBArrayAdd_setEnxposureImageMsgLocalId;
+ (void)PBArrayAdd_enxposureCount;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
