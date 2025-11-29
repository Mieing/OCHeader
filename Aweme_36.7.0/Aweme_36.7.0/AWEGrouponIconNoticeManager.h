@class NSString, AWEGrouponIconNoticeManagerEvader, NSMutableDictionary;

@interface AWEGrouponIconNoticeManager : NSObject <AWEUGDesktopChannelGuideMessage>

@property (retain, nonatomic) AWEGrouponIconNoticeManagerEvader *grouponEvader;
@property (retain, nonatomic) AWEGrouponIconNoticeManagerEvader *nearbyEvader;
@property (retain, nonatomic) NSMutableDictionary *touchedFlags;
@property (retain, nonatomic) NSMutableDictionary *touchedTimes;
@property (retain, nonatomic) NSMutableDictionary *touchedPosition;
@property (retain, nonatomic) NSMutableDictionary *disappearedFlags;
@property (retain, nonatomic) NSMutableDictionary *disappearedTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)desktopChannelGuideAlreadyShowWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 extraParams:(id)a3 config:(id)a4;
- (void)desktopChannelGuideShowFailedWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 error:(id)a3 extraParams:(id)a4;
- (void)clearUpNoticeFlagsOfPage:(id)a0;
- (void)injectDesktopGuideEvadeStrategy:(id /* block */)a0 ofPage:(id)a1;
- (void)setDidDisappearOfPage:(id)a0;
- (void)setDidTouchedOfPage:(id)a0 touchedAt:(id)a1;
- (BOOL)shouldShowDesktopGuideOfPage:(id)a0;
- (id)touchedPositionOfPage:(id)a0;
- (void).cxx_destruct;
- (id)position;
- (id)init;
- (void)dealloc;

@end
