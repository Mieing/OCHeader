@class NSArray, NSString, NSMutableAttributedString;

@interface AWEDetailNewTrendMiddleCellModel : NSObject

@property (nonatomic) BOOL isSkeletonModeStatus;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isMusicStatus;
@property (nonatomic) BOOL isLunaMusicStatus;
@property (nonatomic) BOOL isLunaMVStatus;
@property (copy, nonatomic) NSArray *coverPhotoUrls;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableAttributedString *subTitle;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *useCountContent;
@property (copy, nonatomic) id /* block */ didSelectItemActionBlock;
@property (copy, nonatomic) id /* block */ didCollectionItemActionBlock;
@property (copy, nonatomic) id /* block */ didTryPlayActionBlock;
@property (copy, nonatomic) id /* block */ didUseItemActionBlock;
@property (nonatomic) BOOL isShowLineViewStatus;
@property (nonatomic) BOOL isCollectStatus;

- (void).cxx_destruct;

@end
