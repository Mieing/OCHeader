@class NSMutableArray;

@interface ItemEntRightInfoV2 : GPBMessage

@property (retain, nonatomic) NSMutableArray *entRightsArray;
@property (readonly, nonatomic) unsigned long long entRightsArray_Count;
@property (nonatomic) int rightStatus;
@property (nonatomic) BOOL hasRightStatus;

+ (id)descriptor;

@end
