@class NSString, NSDictionary, NSArray;
@protocol AWEIMSharePanelTrackIDGeneratorProtocol;

@interface AWEShareIMPanelGeneralConfigContext : NSObject

@property (nonatomic) BOOL authorShareNotPublicAweme;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *pageEnterFrom;
@property (copy, nonatomic) NSString *multiSelectedItems;
@property (copy, nonatomic) NSString *replayContent;
@property (nonatomic) BOOL fullScreen;
@property (nonatomic) BOOL triggerKeyboard;
@property (nonatomic) BOOL fromOpenPlatform;
@property (nonatomic) BOOL shouldDisplayForwardToDaily;
@property (nonatomic) BOOL filterNotFriendUserForSingleChat;
@property (copy, nonatomic) NSString *activityTitle;
@property (copy, nonatomic) NSString *activityHighlightTitle;
@property (copy, nonatomic) NSString *activitySchema;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) unsigned long long enterPosition;
@property (retain, nonatomic) id<AWEIMSharePanelTrackIDGeneratorProtocol> trackContext;
@property (copy, nonatomic) NSArray *panelHasSelectedContacts;
@property (copy, nonatomic) id /* block */ shareActionCompletion;
@property (nonatomic) BOOL triggerShareBlock;

- (id)getAllPropertiesAndValues;
- (void).cxx_destruct;

@end
