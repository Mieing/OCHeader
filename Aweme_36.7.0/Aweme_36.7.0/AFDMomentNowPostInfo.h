@class AWEURLModel, NSString, AFDMomentNowPostInfoLocalStorage, AWEImageAlbumImageModel;

@interface AFDMomentNowPostInfo : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *backImage;
@property (retain, nonatomic) AWEURLModel *backThumb;
@property (retain, nonatomic) AWEURLModel *frontImage;
@property (retain, nonatomic) AWEURLModel *frontThumb;
@property (retain, nonatomic) AWEURLModel *fuzzyImage;
@property (retain, nonatomic) AWEURLModel *backFuzzyImage;
@property (retain, nonatomic) AWEURLModel *frontFuzzyImage;
@property (retain, nonatomic) AWEImageAlbumImageModel *imageCompositeEnlargeFront;
@property (nonatomic) double pushTimeStamp;
@property (retain, nonatomic) AFDMomentNowPostInfoLocalStorage *localStorage;
@property (retain, nonatomic) NSString *nowDraftID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
