@class NSString, UIColor, AWEAwemeModel;

@interface AWEKnowledgeCommonLynxPayload : NSObject

@property (retain, nonatomic) AWEAwemeModel *itemModel;
@property (copy, nonatomic) NSString *cardShowEventName;
@property (copy, nonatomic) NSString *removeCardEventName;
@property (copy, nonatomic) NSString *cardStatusChangeEventName;
@property (nonatomic) long long channelID;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *serverData;
@property (nonatomic) BOOL useHunterHeight;
@property (nonatomic) long long autoRetryTime;
@property (nonatomic) BOOL disableRemoveSection;
@property (nonatomic) double cellWidth;
@property (nonatomic) double cellHeight;
@property (nonatomic) double borderRadius;
@property (retain, nonatomic) UIColor *placeHolderColor;

- (void).cxx_destruct;

@end
