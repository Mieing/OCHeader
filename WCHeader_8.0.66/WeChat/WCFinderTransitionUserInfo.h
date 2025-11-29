@class NSString, NSMutableDictionary;
@protocol WCFinderTransitionMediaTransferTarget;

@interface WCFinderTransitionUserInfo : NSObject

@property (retain, nonatomic) WCFinderTransitionUserInfo *transferInfo;
@property (nonatomic) BOOL isTransfer;
@property (retain, nonatomic) NSMutableDictionary *datas;
@property (nonatomic) BOOL interaction;
@property (nonatomic) BOOL isDraggingAsCard;
@property (nonatomic) BOOL isClosureType;
@property (retain, nonatomic) NSString *currentBrowseTid;
@property (weak, nonatomic) id<WCFinderTransitionMediaTransferTarget> mediaTransferTarget;

- (id)init;
- (void)setObject:(id)a0;
- (id)objectForClass:(Class)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObjectNoRetain:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)clean;
- (void).cxx_destruct;

@end
