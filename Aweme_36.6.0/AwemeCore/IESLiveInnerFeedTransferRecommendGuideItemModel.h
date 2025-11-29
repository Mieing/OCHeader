@class NSString;

@interface IESLiveInnerFeedTransferRecommendGuideItemModel : NSObject

@property (retain, nonatomic) NSString *topDesc;
@property (retain, nonatomic) NSString *dragUpDesc;
@property (retain, nonatomic) NSString *dragDownDesc;
@property (retain, nonatomic) NSString *bottomDesc;
@property (retain, nonatomic) NSString *enterFromMerge;
@property (retain, nonatomic) NSString *enterMethod;
@property (nonatomic) long long dragStyle;
@property (nonatomic) BOOL isSingleRoom;
@property (nonatomic) BOOL canNotLoadmoreContinue;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
