@class NSString, NSArray;

@interface IESECPreviewTabItem : NSObject

@property (copy, nonatomic) NSString *tabTitle;
@property (copy, nonatomic) NSArray *labelList;
@property (copy, nonatomic) NSString *tabType;
@property (nonatomic) long long tabStartIndex;

- (void).cxx_destruct;

@end
