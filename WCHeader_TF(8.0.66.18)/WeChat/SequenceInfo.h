@class NSString;

@interface SequenceInfo : NSObject <PBCoding>

@property (nonatomic) unsigned int MoreView_Seq;
@property (nonatomic) unsigned int Setting_Seq;
@property (nonatomic) unsigned int Privacy_Seq;
@property (nonatomic) unsigned int RecentOption_Seq;
@property (nonatomic) unsigned int General_Seq;
@property (nonatomic) unsigned int Plugin_Seq;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_MoreView_Seq;
+ (void)PBArrayAdd_Setting_Seq;
+ (void)PBArrayAdd_Privacy_Seq;
+ (void)PBArrayAdd_RecentOption_Seq;
+ (void)PBArrayAdd_General_Seq;
+ (void)PBArrayAdd_Plugin_Seq;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
