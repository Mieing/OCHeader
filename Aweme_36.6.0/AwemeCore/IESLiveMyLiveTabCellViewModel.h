@class NSString, HTSLiveMyLiveTabItem;

@interface IESLiveMyLiveTabCellViewModel : NSObject

@property (retain, nonatomic) HTSLiveMyLiveTabItem *metaData;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) BOOL topCorners;
@property (nonatomic) BOOL bottomCorners;
@property (copy, nonatomic) NSString *cellIdentifier;
@property (nonatomic) BOOL spaceOnly;
@property (retain, nonatomic) NSString *bizName;

- (id)initWithMetaData:(id)a0;
- (double)usercardWidth;
- (void).cxx_destruct;

@end
