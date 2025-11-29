@class NSString, NSNumber;
@protocol IESLiveInternalRouter;

@interface HTSLiveHelpGuideFragment : IESLiveRoomComponent

@property (retain, nonatomic) NSString *webPageURL;
@property (copy, nonatomic) NSString *webPageScheme;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) NSNumber *roomID;

- (void)componentCreate;
- (void)componentMount;
- (void)openHelpWebPage;
- (void).cxx_destruct;

@end
