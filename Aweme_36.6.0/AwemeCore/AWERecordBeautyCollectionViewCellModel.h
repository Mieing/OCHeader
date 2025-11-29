@class NSString, NSArray;

@interface AWERecordBeautyCollectionViewCellModel : NSObject

@property (copy, nonatomic) NSString *nodeId;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isApplied) BOOL applied;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *iconURLs;
@property (copy, nonatomic) NSString *iconImageName;

- (void).cxx_destruct;

@end
