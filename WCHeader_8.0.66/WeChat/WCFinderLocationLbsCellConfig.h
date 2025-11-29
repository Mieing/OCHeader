@class NSString, FinderLbsResponse;

@interface WCFinderLocationLbsCellConfig : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *defaultContent;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) FinderLbsResponse *lbsInfo;
@property (nonatomic) int scene;
@property (nonatomic) int lbsType;

- (BOOL)isDividerConfig;
- (id)getDividerContent;
- (void).cxx_destruct;

@end
