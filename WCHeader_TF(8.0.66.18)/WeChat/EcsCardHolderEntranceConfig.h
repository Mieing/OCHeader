@class NSString;

@interface EcsCardHolderEntranceConfig : NSObject

@property (readonly, nonatomic) unsigned int showType;
@property (readonly, nonatomic) NSString *iconUrl;
@property (readonly, nonatomic) BOOL needPreload;
@property (readonly, nonatomic) unsigned int titleType;
@property (readonly, nonatomic) BOOL isToNewCards;
@property (readonly, nonatomic) BOOL shouldShow;

- (id)initWithShowType:(unsigned int)a0 iconUrl:(id)a1 needPreload:(BOOL)a2 titleType:(unsigned int)a3;
- (void).cxx_destruct;

@end
