@class NSArray, NSDictionary, _TtC21AWENoticeSwiftService35InteractionNoticeGroupConfiguration;

@interface AWEInteractionNoticeGroupManager : NSObject {
    void /* unknown type, empty encoding */ assignQueue;
    void /* function */ groupInfosArray;
    void /* function */ cachedGroupFlags;
}

@property (nonatomic, readonly) _TtC21AWENoticeSwiftService35InteractionNoticeGroupConfiguration *configuration;
@property (nonatomic) int followNoticeGroup;
@property (nonatomic) int diggNoticeGroup;
@property (nonatomic) int commentNoticeGroup;
@property (nonatomic) int atNoticeGroup;
@property (nonatomic) int fansNoticeGroup;
@property (nonatomic) int FITwoInteractiveNoticeGroup;
@property (nonatomic) int FIThreeInteractiveNoticeGroup;
@property (nonatomic) int FIThreeInteractiveHighFansNoticeGroup;
@property (nonatomic) int FIThreeCommentNoticeGroup;
@property (nonatomic) int FIThreeFlameNoticeGroup;
@property (nonatomic) int FIThreeOtherHTSInteractiveNoticeGroup;
@property (nonatomic) int FIOneInteractiveNoticeGroup;
@property (nonatomic) int recommendNoticeGroup;
@property (nonatomic) int otherNoticeGroup;
@property (nonatomic) int groupApplyAllGroup;
@property (nonatomic) int diggAndOtherGroup;
@property (nonatomic) int mergeFansNoticeGroup;
@property (nonatomic) int mateNoticeGroup;
@property (nonatomic, copy) NSArray *groupInfosArray;
@property (nonatomic, copy) NSDictionary *cachedGroupFlags;
@property (nonatomic, readonly) int interactNoticeGroup;

- (void)applyGroupInfosArray:(id)a0;
- (BOOL)isCachedGroup:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)init;
- (void)setup;

@end
