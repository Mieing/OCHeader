@class NSArray, NSDictionary, AWEUserRelationContext, AWEUserProfileEventCommonParamsHandler, AWEUserModel, NSString;

@interface AWEProfileMoreMenuContext : NSObject <AWEProfileMoreMenuContextProtocol>

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSDictionary *trackerParam;
@property (nonatomic) unsigned long long showMethod;
@property (retain, nonatomic) NSArray *itemOrderArr;
@property (retain, nonatomic) AWEUserProfileEventCommonParamsHandler *eventCommonParamsHandler;
@property (copy, nonatomic) id /* block */ unfollowClickBlock;
@property (copy, nonatomic) id /* block */ followClickBlock;
@property (retain, nonatomic) AWEUserRelationContext *relationContext;
@property (copy, nonatomic) id /* block */ actionClickedBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL enableTopUser;
@property (nonatomic) BOOL shouldShowMateFooter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)enterMethodFromShowMethod:(unsigned long long)a0;

@end
