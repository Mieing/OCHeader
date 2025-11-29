@class NSArray, WAContact, WAContactGetter, DeviceBrandJumpInfo, MMWebImageView, NSString;
@protocol BraceletTopicRecordDelegate;

@interface BraceletTopicRecordView : UIView <MMWebImageViewDelegate> {
    double m_offsetY;
}

@property (retain, nonatomic) NSArray *records;
@property (retain, nonatomic) NSArray *goals;
@property (retain, nonatomic) WAContactGetter *getter;
@property (retain, nonatomic) WAContact *contact;
@property (nonatomic) BOOL isAppleWatch;
@property (nonatomic) BOOL isHardware;
@property (retain, nonatomic) DeviceBrandJumpInfo *jumpInfo;
@property (retain, nonatomic) MMWebImageView *brandIconView;
@property (weak, nonatomic) id<BraceletTopicRecordDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateHeightWithSportRecords:(id)a0 sportGoals:(id)a1;

- (id)initWithSportRecords:(id)a0 sportGoals:(id)a1 width:(double)a2;
- (void)initView;
- (void)initTitleViewWithContact:(id)a0;
- (void)addAppleRing;
- (void)addSportRecord:(id)a0;
- (void)onClickAppButton:(id)a0;
- (void)openFinderProfile;
- (void)openWeAppForSports;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
