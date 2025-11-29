@class IESLiveResidentGuestBanner, IESLiveGiftExhibitionBanner, IESLiveAnchorHomelandBanner, NSMutableArray, IESLiveGroupLiveBanner;

@interface IESLiveProfileBusinessArea : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *topElementListArray;
@property (readonly, nonatomic) unsigned long long topElementListArray_Count;
@property (retain, nonatomic) NSMutableArray *bottomElementListArray;
@property (readonly, nonatomic) unsigned long long bottomElementListArray_Count;
@property (retain, nonatomic) IESLiveGiftExhibitionBanner *exhibitionBanner;
@property (nonatomic) BOOL hasExhibitionBanner;
@property (retain, nonatomic) IESLiveGroupLiveBanner *groupLiveBanner;
@property (nonatomic) BOOL hasGroupLiveBanner;
@property (retain, nonatomic) NSMutableArray *bottomBannerListArray;
@property (readonly, nonatomic) unsigned long long bottomBannerListArray_Count;
@property (retain, nonatomic) IESLiveResidentGuestBanner *residentGuestBanner;
@property (nonatomic) BOOL hasResidentGuestBanner;
@property (retain, nonatomic) IESLiveAnchorHomelandBanner *anchorHomelandBanner;
@property (nonatomic) BOOL hasAnchorHomelandBanner;

+ (id)descriptor;

@end
