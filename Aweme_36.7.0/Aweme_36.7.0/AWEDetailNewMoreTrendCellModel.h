@class NSArray, NSString, AWEAwemeModel;

@interface AWEDetailNewMoreTrendCellModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isSkeletonModeStatus;
@property (nonatomic) long long index;
@property (nonatomic) double widthHeightRatio;
@property (copy, nonatomic) NSArray *coverPhotoUrls;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSArray *avatars;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *schemaContent;
@property (copy, nonatomic) id /* block */ didShootwayActionBlock;
@property (copy, nonatomic) id /* block */ didSelectItemActionBlock;
@property (copy, nonatomic) id /* block */ displayItemTrackActionBlock;

- (void).cxx_destruct;

@end
