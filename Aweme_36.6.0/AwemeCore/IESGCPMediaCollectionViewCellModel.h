@class NSArray, NSString;

@interface IESGCPMediaCollectionViewCellModel : NSObject

@property (retain, nonatomic) NSArray *imageModelArray;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;

@end
