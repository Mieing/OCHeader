@class NSString;

@interface AWEGrouponIconNoticeManagerEvader : NSObject <AWEUGSceneDesktopChannelGuideEvadeProtocol>

@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *tabIDString;
@property (copy, nonatomic) NSString *positionString;
@property (copy, nonatomic) id /* block */ strategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterFrom;
- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)a0 enterFrom:(id)a1;
- (void).cxx_destruct;
- (id)position;
- (id)sceneType;
- (id)tabID;

@end
