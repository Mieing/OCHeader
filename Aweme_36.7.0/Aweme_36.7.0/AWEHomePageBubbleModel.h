@class NSString, NSMutableArray;
@protocol AWEHomePageBubbleContentConfigProtocol;

@interface AWEHomePageBubbleModel : NSObject

@property (retain, nonatomic) id<AWEHomePageBubbleContentConfigProtocol> contentConfig;
@property (nonatomic) double showDuration;
@property (nonatomic) BOOL needCover;
@property (nonatomic) BOOL clickAble;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *componentID;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSMutableArray *tabIDStack;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;

@end
