@class NSMutableDictionary, AWEPostPageMatchMissionListData, NSDictionary, AWEPostPageListHandler, NSArray, NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageMatchMissionHandler : NSObject <AWEPostPageMatchMissionService>

@property (retain, nonatomic) AWEPostPageListHandler *list;
@property (retain, nonatomic) AWEPostPageMatchMissionListData *template;
@property (retain, nonatomic) NSMutableDictionary *registeredMap;
@property (copy, nonatomic) NSDictionary *itemLoadInfo;
@property (nonatomic) BOOL isVisible;
@property (copy, nonatomic) NSArray *sortDescriptor;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

@end
