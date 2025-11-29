@class NSMutableArray;

@interface ResolutionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *resolutionNodeList;
@property (nonatomic) unsigned int videoHeight;
@property (nonatomic) unsigned int videoWidth;
@property (nonatomic) unsigned int frameGapTime;

+ (void)initialize;

@end
