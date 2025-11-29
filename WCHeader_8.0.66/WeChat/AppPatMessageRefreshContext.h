@class NSMutableDictionary;

@interface AppPatMessageRefreshContext : NSObject

@property (nonatomic) double width;
@property (nonatomic) BOOL useLightStyle;
@property (nonatomic) BOOL useLink;
@property (nonatomic) BOOL needCleanRefresh;
@property (retain, nonatomic) NSMutableDictionary *contentIdToTimeOffset;

- (id)init;
- (void)updateNeedCleanRefreshWithContext:(id)a0;
- (void).cxx_destruct;

@end
