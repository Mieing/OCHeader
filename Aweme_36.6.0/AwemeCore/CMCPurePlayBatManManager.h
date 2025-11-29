@class NSString, AWEAwemeModel;
@protocol AWECommerceComponentContext;

@interface CMCPurePlayBatManManager : NSObject <AWECommerceComponentProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowComponentWithContext:(id)a0;
+ (id)playAddrWithAwemeModel:(id)a0;

@end
