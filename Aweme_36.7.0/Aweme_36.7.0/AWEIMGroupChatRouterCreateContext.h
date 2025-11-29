@class NSArray, NSString, NSDictionary, NSNumber;

@interface AWEIMGroupChatRouterCreateContext : NSObject <AWEIMGroupChatRouterContext>

@property (readonly, copy, nonatomic) NSArray *defaultSelectUserIDs;
@property (readonly, copy, nonatomic) NSString *createSource;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *enterMethod;
@property (nonatomic) unsigned long long disableOption;
@property (nonatomic) double panelHeight;
@property (copy, nonatomic) NSString *confirmButtonTitle;
@property (nonatomic) BOOL dismissSuperVC;
@property (copy, nonatomic) NSString *actionSchemaAfterEnterVC;
@property (retain, nonatomic) NSNumber *preferThemeStyle;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
