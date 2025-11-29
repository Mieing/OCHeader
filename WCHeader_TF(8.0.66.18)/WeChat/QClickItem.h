@class NSString;

@interface QClickItem : NSObject

@property (nonatomic) int x;
@property (nonatomic) int y;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *levelName;
@property (retain, nonatomic) NSString *buildingGUID;
@property (retain, nonatomic) NSString *buildingName;
@property (nonatomic) int overlayID;
@property (retain, nonatomic) NSString *poiId;

- (void).cxx_destruct;

@end
