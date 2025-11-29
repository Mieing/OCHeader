@interface WCBrandWebUiUtil : NSObject

+ (id)updateMPPagePresetUI:(id)a0;
+ (id)genMMWebPresetUIFromMsgAppShareItem:(id)a0 andUrl:(id)a1;
+ (id)genMMWebPresetUIFromWCTimelineAppShareItem:(id)a0 andUrl:(id)a1;
+ (id)genMMWebPresetUIFromFavAppShareItem:(id)a0 andUrl:(id)a1;
+ (id)genMMWebPresetUIWithUrl:(id)a0;
+ (id)genMMWebPresetUIFromIgnorableAppShareItem:(id)a0 andUrl:(id)a1;
+ (id)genMMWebPresetUIWithItemShowType:(unsigned int)a0 andUrl:(id)a1;
+ (BOOL)canShowFullScreen:(unsigned int)a0 andUrl:(id)a1;
+ (BOOL)isInFullScreenUrlPrefixList:(id)a0;
+ (BOOL)isYuanBaoURL:(id)a0;
+ (id)updateYuanBaoMMWebPresetUI:(id)a0;

@end
