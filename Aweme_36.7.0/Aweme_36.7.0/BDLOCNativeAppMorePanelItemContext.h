@class NSString, BDPNativeAppContext;

@interface BDLOCNativeAppMorePanelItemContext : NSObject

@property (retain, nonatomic) BDPNativeAppContext *context;
@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly, copy, nonatomic) NSString *currentPagePath;
@property (readonly, copy, nonatomic) NSString *currentPageQuery;

+ (id)contextFromBDPContext:(id)a0;
+ (id)BDPContextFromBDLOC:(id)a0;

- (id)currentPagePath;
- (id)currentPageQuery;
- (id)initWithBDPContext:(id)a0;
- (void).cxx_destruct;

@end
