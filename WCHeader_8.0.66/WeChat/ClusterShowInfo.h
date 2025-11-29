@class NSString, NSMutableArray;

@interface ClusterShowInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSString *sourceIcon;
@property (retain, nonatomic) NSString *iconId;
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSString *sourceActivityId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *iconActions;

+ (void)initialize;

@end
