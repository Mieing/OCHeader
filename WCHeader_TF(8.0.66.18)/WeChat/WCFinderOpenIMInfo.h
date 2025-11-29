@class NSString;

@interface WCFinderOpenIMInfo : NSObject

@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int openContactScene;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *joinLiveTraceBuffer;
@property (nonatomic) BOOL showInHalfScreen;
@property (nonatomic) BOOL isFromJumpInfo;
@property (copy, nonatomic) NSString *searchContext;
@property (retain, nonatomic) NSString *finderContext;

- (id)genOpenIMFinderInfo;
- (id)genSearchContext;
- (void).cxx_destruct;

@end
