@class NSString, NSArray;
@protocol AWEIMShareModelProtocol;

@interface AWESharePanelListItemInfo : NSObject <AWESharePanelListItemInfoInterface>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (retain, nonatomic) NSArray *recentShareModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
