@class NSString;

@interface MMFinderGameLiveWelfareCollectionCellViewModel : NSObject

@property (retain, nonatomic) NSString *taskDesc;
@property (retain, nonatomic) NSString *imageUrl;
@property (nonatomic, getter=isShowDegreeOfCompletion) BOOL showDegreeOfCompletion;
@property (nonatomic) double degreeOfCompletion;
@property (nonatomic, getter=isNeedShow) BOOL needShow;
@property (nonatomic) double cellWidth;
@property (retain, nonatomic) NSString *reportExtInfoJson;
@property (nonatomic) BOOL isUseLocalPic;

+ (id)cellIdentifier;
+ (Class)cellClass;

- (void)calculateCellWidth;
- (void).cxx_destruct;

@end
